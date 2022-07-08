#include "StateMachine.hpp"

namespace MyNamespace
{
	void StateMachine::AddState(StateRef newState, bool isReplacing)
	{
		this->_isAdding = true;
		this->_isReplacing = isReplacing;

		this->_newState = std::move(newState);   //"std::move( t )" - służy do wskazania, że ​​obiekt t może zostać „przeniesiony z”, tj. umożliwia efektywne przeniesienie zasobów z t do innego obiektu.
	}

	void StateMachine::RemoveState( )
	{
		this->_isRemoving = true;
	}

	void StateMachine::ProcessStateChanges( )
	{
		if ( this->_isRemoving && !this->_states.empty() )
		{
			this->_states.pop( );   //".pop()" - zdejmuje istniejący element ze szczytu stosu (usuwamy go)

			if ( !this->_states.empty() )
			{
				this->_states.top()->Resume();
			}

			this->_isRemoving = false;
		}

		if ( this->_isAdding )
		{
			if ( !this->_states.empty() )
			{
				if ( this->_isReplacing )
				{
					this->_states.pop();
				}
				else
				{
					this->_states.top()->Pause();
				}
			}

			this->_states.push( std::move( this->_newState ) );
			this->_states.top()->Init();
			this->_isAdding = false;
		}
	}

	StateRef& StateMachine::GetActiveState()
	{
		return this->_states.top();
	}
}