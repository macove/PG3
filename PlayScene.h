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
};

