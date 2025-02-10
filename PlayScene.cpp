#include "PlayScene.h"

void PlayScene::Initialize() {
}

void PlayScene::Update(char* keys, char* preKeys) {
	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE]) {
		for (int i = 0; i < maxBullet; i++) {

			if (playerBulletFlag[i] == 0) {

				playerBulletFlag[i] = 1;
				playerBulletX[i] = playerX;
				playerBulletY[i] = playerY;
				break;

			}
		}

	}
}

void PlayScene::Draw() {
}
