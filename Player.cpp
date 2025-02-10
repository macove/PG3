#include "Player.h"
#include<Novice.h>

void Player::Initialize() {
	player_posX = 500;
	player_posY = 400;
	player_r = 30;
	player_speed = 10;
}

Player::~Player() {
}

void Player::MoveLeft() {
	player_posX -= player_speed;
}

void Player::MoveRight() {
	player_posX += player_speed;
}

//void Player::Update(char* keys, char* preKeys) {
//	if (keys[DIK_A] && preKeys[DIK_A]) {
//		player_posX -= player_speed;
//	}
//	if (keys[DIK_D] && preKeys[DIK_D]) {
//		player_posX += player_speed;
//	}
//	if (keys[DIK_W] && preKeys[DIK_W]) {
//		player_posY -= player_speed;
//	}
//	if (keys[DIK_S] && preKeys[DIK_S]) {
//		player_posY += player_speed;
//	}
//}

void Player::Draw() {
	Novice::DrawEllipse(player_posX, player_posY, player_r, player_r, 0.0f, 0xFFFFFFFF, kFillModeSolid);
}
