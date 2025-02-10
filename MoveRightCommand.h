#pragma once
#include "Command.h"
#include "Player.h"
class MoveRightCommand : public Command {
public:
	void Execute(Player* player) override;
};

