#include <Novice.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <time.h>
#include"Scene.h"
#include"TitleScene.h"

//const char kWindowTitle[] = "K023_G1076_PARK_YIJUN_タイトル";

//typedef struct Set {
//	int posX;
//	int posY;
//	int R;
//	int bulletR;
//	int speedX;
//	int speedY;
//	float hitPosX;
//	float hitPosY;
//	float enemyPlayerDistance;
//	int bulletPosX;
//	int bulletPosY;
//	float enemyBulletHitPosX;
//	float enemyBulletHitPosY;
//	float bulletPlayerDistance;
//}Set;



// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };

	/*enum Scene {
		TITLE,
		GAME,
		OVER,
		CLEAR
	};
	Scene scene = TITLE;




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

	int titleImage = Novice::LoadTexture("./title.png");
	int enemyImage = Novice::LoadTexture("./enemy.png");
	int bulletImage = Novice::LoadTexture("./bullet1.png");
	int backgroundImage = Novice::LoadTexture("./background.png");
	int overImage = Novice::LoadTexture("./over.png");
	int clearImage = Novice::LoadTexture("./clear.png");
	int playerbulltImage = Novice::LoadTexture("./playerbullt.png");
	int playerImage = Novice::LoadTexture("./player_1.png");
	int explosionImage = Novice::LoadTexture("./explosion_1.png");

	int explosion[5] = { 0 };*/

	

	/*int shotTime = 500;

	

	Set moveSet[5];

	for (int i = 1; i < 6; i++) {
		moveSet[i - 1].posX = 10 * i;
		moveSet[i - 1].posY = 30 * i;
		moveSet[i - 1].R = 25;
		moveSet[i - 1].bulletR = 15;
		moveSet[i - 1].speedX = 3 * i;
		moveSet[i - 1].speedY = 5 * i;
		moveSet[i - 1].hitPosX = moveSet[i - 1].posX - playerX;
		moveSet[i - 1].hitPosY = moveSet[i - 1].posY - playerY;
		moveSet[i - 1].enemyPlayerDistance = sqrtf(moveSet[i - 1].hitPosX * moveSet[i - 1].hitPosX + moveSet[i - 1].hitPosY * moveSet[i - 1].hitPosY);
		moveSet[i - 1].bulletPosX = moveSet[i - 1].posX;
		moveSet[i - 1].bulletPosY = moveSet[i - 1].posY;
		moveSet[i - 1].enemyBulletHitPosX = moveSet[i - 1].bulletPosX - playerX;
		moveSet[i - 1].enemyBulletHitPosY = moveSet[i - 1].bulletPosY - playerY;
		moveSet[i - 1].bulletPlayerDistance = sqrtf(moveSet[i - 1].enemyBulletHitPosX * moveSet[i - 1].enemyBulletHitPosX + moveSet[i - 1].enemyBulletHitPosY * moveSet[i - 1].enemyBulletHitPosY);
		playerBulletR[i - 1] = 10;
		enemyColor[i - 1] = 0xFFFFFFFF;
		enemyAliveFlag[i - 1] = 1;
		enemyRespawnTimer[i - 1] = 120;
		isEnemyAlive[i - 1] = 1;
		explosion[i - 1] = 0;
	}


	for (int i = 0; i < 5; i++) {
		enemyHP[i] = 100;
		playerBulletX[i] = 0;
		playerBulletY[i] = 0;
		playerBulletFlag[i] = 0;

	}*/
	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		///
		/// ↓更新処理ここから
		///

		///////////////////////////////////////////////////////////////

		//switch (scene)
		//{
		//case TITLE:
		//	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE])
		//	{
		//		scene = GAME;

		//		enemyShot = 1;
		//		playerX = 1200;
		//		playerY = 700;
		//		playerHP = 100;
		//		isPlayerAlve = 1;
		//		playerRespawnTimer = 30;

		//		for (int i = 0; i < 5; i++) {
		//			playerBulletFlag[i] = 0;
		//			enemyColor[i] = 0xFFFFFFFF;
		//			enemyAliveFlag[i] = 1;
		//			enemyRespawnTimer[i] = 120;
		//			isEnemyAlive[i] = 1;
		//			enemyHP[i] = 100;
		//			explosion[i] = 0;
		//			
		//		}
		//		for (int i = 1; i < 6; i++) {
		//			moveSet[i - 1].posX = 10 * i;
		//			moveSet[i - 1].posY = 30 * i;
		//		}

		//	}
		//	break;

		//	////////////////////////////////////////////////////////////////////////////
		//case GAME:
		//{


		//	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE]) //SPACEキーを押された瞬間
		//	{
		//		for (int i = 0; i < maxBullet; i++) {

		//			if (playerBulletFlag[i] == 0) {

		//				playerBulletFlag[i] = 1;
		//				playerBulletX[i] = playerX;
		//				playerBulletY[i] = playerY;
		//				break;

		//			}
		//		}

		//	}
		//	for (int i = 0; i < maxBullet; i++)
		//	{
		//		if (playerBulletFlag[i] == 1)
		//		{
		//			playerBulletY[i] -= playerBulletSpeed;
		//		}

		//		if (playerBulletY[i] < -20)
		//		{
		//			playerBulletFlag[i] = 0;
		//		}
		//	}
		//	/////////////////////////////////////////////////////////////////////////
		//	if (keys[DIK_UP] && !preKeys[DIK_UP])
		//	{
		//		playerJump = 1;
		//		playerY -= 100;

		//		if (playerY <= 20)
		//		{
		//			playerY = 20;
		//		}
		//	}

		//	if (keys[DIK_DOWN])
		//	{
		//		playerJump = 1;

		//		playerY += 50;

		//		if (playerY >= 700)
		//		{
		//			playerY = 700;
		//		}

		//	}
		//	if (playerJump == 1 && playerY < 700)
		//	{
		//		playerY += 2;
		//	}

		//	if (keys[DIK_LEFT])
		//	{
		//		playerX -= 2 * playerSpeed;
		//		if (playerX < 20) {
		//			playerX = 20;
		//		}
		//	}


		//	if (keys[DIK_RIGHT])
		//	{
		//		playerX += 2 * playerSpeed;
		//		if (playerX > 1260) {
		//			playerX = 1260;
		//		}
		//	}
		//}
		///////////////////////////////////////////////////////////////////////////////////////////////////////////

		//for (int i = 0; i < 5; i++)
		//{
		//	if (isEnemyAlive[i] == 1)
		//	{
		//		//敵の移動
		//		moveSet[i].posX += moveSet[i].speedX;
		//		moveSet[i].posY += moveSet[i].speedY;

		//		if (moveSet[i].posX <= 0 || moveSet[i].posX >= 1230)
		//		{
		//			moveSet[i].speedX *= -1;
		//		}
		//		if (moveSet[i].posY <= 0 || moveSet[i].posY >= 670)
		//		{
		//			moveSet[i].speedY *= -1;
		//		}
		//	}
		//}


		/////////////////////////////////////////////////////////////////////////


		//if (enemyShot == 1) {

		//	shotTime--;
		//}
		//for (int i = 0; i < 5; i++) {

		//	if (shotTime == 200) {
		//		enemyShotAlive[i] = 1;
		//		enemyRandom1 = rand() % 4;
		//		enemyRandom2 = rand() % 4;
		//		enemyRandom3 = rand() % 4;
		//		enemyRandom4 = rand() % 4;
		//		enemyRandom5 = rand() % 4;
		//		for (int j = 0; j < 5; j++)
		//		{
		//			moveSet[j].bulletPosX = moveSet[j].posX;
		//			moveSet[j].bulletPosY = moveSet[j].posY;
		//		}
		//	}
		//	if (enemyShotAlive[i] == 1) {

		//		if (enemyRandom1 == 0)
		//		{
		//			moveSet[0].bulletPosX += bulletSpeed;
		//		}
		//		if (enemyRandom1 == 1)
		//		{
		//			moveSet[0].bulletPosY += bulletSpeed;
		//		}
		//		if (enemyRandom1 == 2)
		//		{
		//			moveSet[0].bulletPosX -= bulletSpeed;
		//		}
		//		if (enemyRandom1 == 3)
		//		{
		//			moveSet[0].bulletPosY -= bulletSpeed;
		//		}
		//		///////////////////////////////////////
		//		if (enemyRandom2 == 0)
		//		{
		//			moveSet[1].bulletPosX += bulletSpeed;
		//		}
		//		if (enemyRandom2 == 1)
		//		{
		//			moveSet[1].bulletPosY += bulletSpeed;
		//		}
		//		if (enemyRandom2 == 2)
		//		{
		//			moveSet[1].bulletPosX -= bulletSpeed;
		//		}
		//		if (enemyRandom2 == 3)
		//		{
		//			moveSet[1].bulletPosY -= bulletSpeed;
		//		}
		//		////////////////////////////////////////
		//		if (enemyRandom3 == 0)
		//		{
		//			moveSet[2].bulletPosX += bulletSpeed;
		//		}
		//		if (enemyRandom3 == 1)
		//		{
		//			moveSet[2].bulletPosY += bulletSpeed;
		//		}
		//		if (enemyRandom3 == 2)
		//		{
		//			moveSet[2].bulletPosX -= bulletSpeed;
		//		}
		//		if (enemyRandom3 == 3)
		//		{
		//			moveSet[2].bulletPosY -= bulletSpeed;
		//		}
		//		////////////////////////////////////////////
		//		if (enemyRandom4 == 0)
		//		{
		//			moveSet[3].bulletPosX += bulletSpeed;
		//		}
		//		if (enemyRandom4 == 1)
		//		{
		//			moveSet[3].bulletPosY += bulletSpeed;
		//		}
		//		if (enemyRandom4 == 2)
		//		{
		//			moveSet[3].bulletPosX -= bulletSpeed;
		//		}
		//		if (enemyRandom4 == 3)
		//		{
		//			moveSet[3].bulletPosY -= bulletSpeed;
		//		}
		//		////////////////////////////////////
		//		if (enemyRandom5 == 0)
		//		{
		//			moveSet[4].bulletPosX += bulletSpeed;
		//		}
		//		if (enemyRandom5 == 1)
		//		{
		//			moveSet[4].bulletPosY += bulletSpeed;
		//		}
		//		if (enemyRandom5 == 2)
		//		{
		//			moveSet[4].bulletPosX -= bulletSpeed;
		//		}
		//		if (enemyRandom5 == 3)
		//		{
		//			moveSet[4].bulletPosY -= bulletSpeed;
		//		}
		//	}
		//	if (enemyShotAlive[i] == 1) {
		//		for (int j = 0; j < 5; j++)
		//		{
		//			if (moveSet[i].bulletPosX <= -20 && moveSet[i].bulletPosX >= 1300 && moveSet[i].bulletPosY <= -20 && moveSet[i].bulletPosY >= 740)
		//				enemyShotAlive[j] = 0;
		//		}

		//	}
		//}
		//if (shotTime == 0) {
		//	shotTime = 500;
		//}
		///////////////////////////////////////////////////////////////////////////////////////

		//for (int i = 0; i < 5; i++) {
		//	moveSet[i].hitPosX = moveSet[i].posX - playerX;
		//	moveSet[i].hitPosY = moveSet[i].posY - playerY;
		//	moveSet[i].enemyBulletHitPosX = moveSet[i].bulletPosX - playerX;
		//	moveSet[i].enemyBulletHitPosY = moveSet[i].bulletPosY - playerY;
		//	moveSet[i].enemyPlayerDistance = sqrtf(moveSet[i].hitPosX * moveSet[i].hitPosX + moveSet[i].hitPosY * moveSet[i].hitPosY);
		//	moveSet[i].bulletPlayerDistance = sqrtf(moveSet[i].enemyBulletHitPosX * moveSet[i].enemyBulletHitPosX + moveSet[i].enemyBulletHitPosY * moveSet[i].enemyBulletHitPosY);

		//}

		//for (int i = 0; i < 5; i++) {
		//	if (isPlayerAlve == 1 && isEnemyAlive[i] == 1) {

		//		if (moveSet[i].enemyPlayerDistance <= (playerR + moveSet[i].R) || moveSet[i].bulletPlayerDistance <= (playerR + moveSet[i].bulletR) && enemyShotAlive[i] == 1) {
		//			playerColor = 0xFF0000FF;
		//			playerHP -= 20;
		//			isPlayerAlve = 0;
		//			break;
		//		}
		//		else {
		//			playerColor = 0xFFFFFFFF;
		//		}
		//	}
		//}
		//for (int i = 0; i < 5; i++) {
		//	playerBulletEnemyHitPosX[i] = playerBulletX[i] - moveSet[i].posX;
		//	playerBulletEnemyHitPosY[i] = playerBulletY[i] - moveSet[i].posY;
		//	playerBulletEnemyDistance[i] = sqrtf(playerBulletEnemyHitPosX[i] * playerBulletEnemyHitPosX[i] + playerBulletEnemyHitPosY[i] * playerBulletEnemyHitPosY[i]);

		//}
		//for (int i = 0; i < 5; i++) {

		//	if (playerBulletEnemyDistance[i] <= (moveSet[i].R) + playerBulletR[i]) {
		//		enemyColor[i] = 0xFF0000FF;
		//		enemyHP[i] -= 50;
		//		isEnemyAlive[i] = 0;
		//	}
		//	else {
		//		enemyColor[i] = 0xFFFFFFFF;
		//	}
		//}
		//for (int i = 0; i < 5; i++) {
		//	if (isEnemyAlive[i] == 0)
		//	{
		//		enemyRespawnTimer[i]--;
  // 				explosion[i] = 1;
		//	}
		//}
		//for (int i = 0; i < 5; i++) {
		//	if (enemyRespawnTimer[i] <= 0) {
		//		//isEnemyAlive[i] = 1;
		//		explosion[i] = 0;
		//		//enemyRespawnTimer[i] = 120;
		//	}
		//	if (isEnemyAlive[i] == 1) {
		//		enemyShotAlive[i] = 1;
		//	}
		//	if (enemyHP[i] == 0)
		//	{
		//		enemyAliveFlag[i] = 0;
		//	}
		//	if (enemyAliveFlag[i] == 0) {
		//		enemyShotAlive[i] = 0;
		//	}


		//}

		//if (isPlayerAlve == 0) {
		//	playerRespawnTimer--;
		//}
		//if (playerRespawnTimer == 0) {
		//	isPlayerAlve = 1;
		//	playerRespawnTimer = 30;
		//}
		//enemyAlive = 0;
		//for (int i = 0; i < 5; i++) {
		//	enemyAlive += isEnemyAlive[i];
		//}
		//for (int i = 0; i < 5; i++) {
		//	
		//	if (enemyAlive == 0)
		//	{
		//		scene = CLEAR;
		//	}
		//}

		//if (playerHP <= 0)
		//{
		//	scene = OVER;
		//}

		//break;
		/////////////////////////////////////////////////////////////////////////////////
		//case OVER:
		//	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE])
		//	{
		//		scene = TITLE;



		//	}
		//	break;

		//case CLEAR:
		//	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE])
		//	{
		//		scene = TITLE;

		//	}
		//	break;
		//}












		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから

		/*switch (scene)
		{
		case TITLE:

			Novice::DrawSprite(0, 0, titleImage, 1, 1, 0.0f, 0xFFFFFFFF);

			break;


		case GAME:
			Novice::DrawSprite(0, 0, backgroundImage, 1, 1, 0.0f, 0xFFFFFFFF);
			for (int i = 0; i < 5; i++)
			{
				if (isEnemyAlive[i] == 1) {
					if (enemyAliveFlag[i] == 1) {
						Novice::DrawSprite(moveSet[i].posX, moveSet[i].posY, enemyImage, 1, 1, 0.0f, enemyColor[i]);

					}
					if (isEnemyAlive[i] == 0)
					{
						Novice::DrawSprite(moveSet[i].posX, moveSet[i].posY, bulletImage, 1, 1, 0.0f, 0xFFFFFFFF);
					}
					if (playerBulletFlag[i] == 1)
					{
						Novice::DrawSprite(int(playerBulletX[i]) - int(playerBulletR[i]), int(playerBulletY[i]) - int(playerBulletR[i]), playerbulltImage, 1, 1, 0.0f, 0xFFFFFFFF);
					}
				}

					if (explosion[i] == 1)
					{
   						Novice::DrawSprite(moveSet[i].posX - moveSet[i].R, moveSet[i].posY - moveSet[i].R, explosionImage, 1, 1, 0.0f, 0xFFFFFFFF);

					}

			}

			Novice::DrawSprite(int(playerX) - int(playerR), int(playerY) - int(playerR), playerImage, 1, 1, 0.0f, playerColor);


			Novice::ScreenPrintf(0, 0, "playerHP: %d", playerHP);
			Novice::ScreenPrintf(0, 30, "playerRespawnTimer:%d", playerRespawnTimer);
			Novice::ScreenPrintf(0, 50, "%d", enemyHP[0]);
			Novice::ScreenPrintf(0, 70, "enemyAlive:%d", enemyAlive);

			break;

		case OVER:
			Novice::DrawSprite(0, 0, overImage, 1, 1, 0.0f, 0xFFFFFFFF);
			break;

		case CLEAR:
			Novice::DrawSprite(0, 0, clearImage, 1, 1, 0.0f, 0xFFFFFFFF);
			break;
		}*/






			///
			/// ↑描画処理ここまで
			///

			// フレームの終了
			Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
