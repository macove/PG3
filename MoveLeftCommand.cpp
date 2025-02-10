#include "MoveLeftCommand.h"

void MoveLeftCommand::Execute(Player* player) {
	player->MoveLeft();
}
