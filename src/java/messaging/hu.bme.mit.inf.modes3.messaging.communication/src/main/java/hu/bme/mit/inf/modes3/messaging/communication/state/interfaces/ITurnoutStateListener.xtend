package hu.bme.mit.inf.modes3.messaging.communication.state.interfaces

import hu.bme.mit.inf.modes3.messaging.communication.enums.TurnoutState

interface ITurnoutStateListener {
	def void onTurnoutState(int id, TurnoutState state);
}
