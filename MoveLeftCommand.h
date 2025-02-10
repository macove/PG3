#pragma once
#include "Command.h"
#include "Player.h"
class MoveLeftCommand : public Command {
public:
	void Execute(Player* player) override;
};

