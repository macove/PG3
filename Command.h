#pragma once

class Player;

class Command {
public:
    virtual ~Command() {}

    virtual void Execute(Player* player) = 0;
};

