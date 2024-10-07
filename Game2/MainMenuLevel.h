#pragma once
class UIManager;

class MainMenuLevel
{
public:
	MainMenuLevel();
	virtual ~MainMenuLevel();
	virtual void Init();
	virtual void Release();
	virtual void Update();
	virtual void LateUpdate();
	virtual void Render();
	virtual void ResizeScreen();

private:
	UIManager* uiManager;
};
