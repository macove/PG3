#include "SceneManager.h"
#include"TitleScene.h"
#include"PlayScene.h"
#include"OverScene.h"

void SceneManager::ChangeScene(SceneType newScene) {
    switch (newScene) {
    case TITLE:
        currentScene = std::make_unique<TitleScene>();
        break;
    case GAME:
        currentScene = std::make_unique<PlayScene>();
        break;
    case OVER:
        currentScene = std::make_unique<OverScene>();
        break;
    }
}

void SceneManager::Update(char* keys, char* preKeys) {
    if (currentScene) currentScene->Update(keys, preKeys);
}

void SceneManager::Draw() {
    if (currentScene) currentScene->Draw();
}
