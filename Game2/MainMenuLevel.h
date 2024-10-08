#pragma once
class UIManager;
class LevelManager;
class Player;
class MainMenuLevel
{
public:
	MainMenuLevel();
	virtual ~MainMenuLevel();
	virtual void Init(Player* player);
	virtual void Release();
	virtual void Update();
	virtual void LateUpdate();
	virtual void Render();
	virtual void ResizeScreen();

private:
	UIManager* uiManager;
	LevelManager* levelManager;
};
