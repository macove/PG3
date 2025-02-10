#pragma once
#include <Novice.h>

const char kWindowTitle[] = "K023_G1076_PARK_YIJUN_Tilte";
class Scene {

 public:
     virtual void Initialize() = 0;
     virtual void Update(char* keys, char* preKeys) = 0;
     virtual void Draw() = 0;
     virtual ~Scene() {}

};

