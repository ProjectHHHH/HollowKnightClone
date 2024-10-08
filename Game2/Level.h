#pragma once
#include <vector>
class Player;
class Wall;
class Floor;
class ObImage;

class Level
{
public:
	Level() {};
	virtual ~Level() {};
	virtual void Init(Player* player) = 0;
	virtual void Release() = 0;
	virtual void Update() = 0;
	virtual void LateUpdate() = 0;
	virtual void Render() = 0;
	virtual void ResizeScreen() = 0;

	std::vector <Wall> wall;
	std::vector <Floor> floor;

	Player* player;

	ObImage* bg;

};

