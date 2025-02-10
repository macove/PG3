#include "ClearScene.h"

void ClearScene::Initialize() {
	clearImage = Novice::LoadTexture("./clear.png");
}

void ClearScene::Update(char* keys, char* preKeys) {
	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE]) {
		SceneManager::GetInstance().ChangeScene(SceneManager::GAME);
	}
}

void ClearScene::Draw() {
	Novice::DrawSprite(0, 0, clearImage, 1, 1, 0.0f, 0xFFFFFFFF);
}
