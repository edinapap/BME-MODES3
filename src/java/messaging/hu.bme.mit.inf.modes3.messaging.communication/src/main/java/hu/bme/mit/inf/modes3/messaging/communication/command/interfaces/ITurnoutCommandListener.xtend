package hu.bme.mit.inf.modes3.messaging.communication.command.interfaces

import hu.bme.mit.inf.modes3.messaging.communication.enums.TurnoutState

interface ITurnoutCommandListener {
	def void onTurnoutCommand(int id, TurnoutState state)
}
