#pragma once
#include "Level.h"
class UIManager;
class LevelManager;
class Player;
class MainMenuLevel : public Level
{
public:
	MainMenuLevel();
	virtual ~MainMenuLevel();
	virtual void Init(Player* player, UIManager* uiManager, LevelManager* levelManager) override;
	virtual void Release() override;
	virtual void Update() override;
	virtual void LateUpdate() override;
	virtual void Render() override;
	virtual void ResizeScreen() override;

private:
	UIManager* uiManager;
	LevelManager* levelManager;
	class IntroLevel* introLevel;
};
