#include "TitleScene.h"

void TitleScene::Initialize() {

    titleImage = Novice::LoadTexture("./title.png");
}

void TitleScene::Update(char* keys, char* preKeys) {
    if (keys[DIK_SPACE] && !preKeys[DIK_SPACE]) {
        SceneManager::GetInstance().ChangeScene(SceneManager::GAME);
    }

}

void TitleScene::Draw() {
    Novice::DrawSprite(0, 0, titleImage, 1, 1, 0.0f, 0xFFFFFFFF);
}
