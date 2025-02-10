#pragma once
#include <memory>
#include "Scene.h"
#include <Novice.h>
class SceneManager {
public:
    enum SceneType { TITLE, GAME, OVER };

    static SceneManager& GetInstance() {
        static SceneManager instance;
        return instance;
    }
    void ChangeScene(SceneType newScene);
    void Update(char* keys, char* preKeys);
    void Draw();
private:
    SceneManager() {
        ChangeScene(TITLE);
    }
    std::unique_ptr<Scene> currentScene;
};

