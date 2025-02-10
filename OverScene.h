#pragma once
#include"Scene.h"
#include <Novice.h>
#include "SceneManager.h"
class OverScene : public Scene {
public:
	void Initialize() override;
	void Update(char* keys, char* preKeys) override;
	void Draw() override;


private:

	int overImage;

};

