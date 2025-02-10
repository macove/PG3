#pragma once
#include "Command.h"

class Player {



private:


	

	int player_posX;
	int player_posY;
	int player_r;
	int player_speed;



public:

	int getPosX() { return player_posX; };
	int getPosY() { return player_posY; };
	int getRadius() { return player_r; };

	void setPosX(int x) { player_posX = x; };
	void setPosY(int y) { player_posY = y; };

	void Initialize();

	~Player();

	void MoveLeft();
	void MoveRight();

	//void Update(char* keys, char* preKeys);
	void Draw();

};


