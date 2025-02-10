#pragma once
#include"Scene.h"
#include <Novice.h>
#include "SceneManager.h"
class PlayScene : public Scene {
public:
	void Initialize() override;
	void Update(char* keys, char* preKeys) override;
	void Draw() override;
private:


	float playerX = 1200;
	float playerY = 700;
	float playerR = 20;

	int playerColor = 0xFFFFFFFF;
	int playerJump = 0;
	int playerSpeed = 5;
	int playerHP = 100;
	int isPlayerAlve = 1;
	int playerRespawnTimer = 30;

	const int maxBullet = 5;
	float playerBulletX[maxBullet];
	float playerBulletY[maxBullet];
	float playerBulletR[5];
	int playerBulletSpeed = 10;
	int playerBulletFlag[maxBullet]{};

	float playerBulletEnemyHitPosX[5];
	float playerBulletEnemyHitPosY[5];
	float playerBulletEnemyDistance[5] = { 0 };

	int enemyShot = 1;

	int enemyRandom1 = 0;
	int enemyRandom2 = 0;
	int enemyRandom3 = 0;
	int enemyRandom4 = 0;
	int enemyRandom5 = 0;
	int isEnemyAlive[5];
	int enemyAliveFlag[5];
	int enemyShotAlive[5] = { 0 };
	int enemyHP[5];
	int bulletSpeed = 30;
	int enemyRespawnTimer[5];
	int enemyColor[5];
	int enemyAlive = 0;

};

