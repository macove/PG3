#include "MoveRightCommand.h"

void MoveRightCommand::Execute(Player* player) {
	player->MoveRight();
}
