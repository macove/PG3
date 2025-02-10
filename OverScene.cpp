#include "OverScene.h"

void OverScene::Initialize() {
	overImage = Novice::LoadTexture("./over.png");
}

void OverScene::Update(char* keys, char* preKeys) {
	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE]) {
		SceneManager::GetInstance().ChangeScene(SceneManager::GAME);
	}
}

void OverScene::Draw() {
	Novice::DrawSprite(0, 0, overImage, 1, 1, 0.0f, 0xFFFFFFFF);
}
