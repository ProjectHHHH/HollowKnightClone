#pragma once
#include <vector>

class Button;
class ObImage;

enum class ECollisionState
{
	GameStartBnt,
	GameSettingBnt,
	AchievementBnt,
	GameExitBnt,
	None
};

class MainMenu
{
public:
	MainMenu();
	virtual ~MainMenu();
	virtual void Init(class UIManager* uiManager, class LevelManager* levelManager);
	virtual void Update();
	virtual void Render();
	virtual void LateUpdate();

	void CollideWithMouse();

public:
	bool turnOffCollision = false;
	
	ECollisionState collisionState;

private:
	ObImage* titleTop;
	ObImage* titleText;
	Button* gameStartBnt;
	Button* gameSettingBnt;
	Button* achievementBnt;
	Button* gameExitBnt;
	UIManager* uiManager; 
	LevelManager* levelManager;

	ObImage* Slider;
};

