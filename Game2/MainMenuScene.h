#pragma once
class UIManager;

class MainMenuScene
{
public:
	MainMenuScene();
	virtual ~MainMenuScene();
	virtual void Init();
	virtual void Release();
	virtual void Update();
	virtual void LateUpdate();
	virtual void Render();
	virtual void ResizeScreen();

private:
	UIManager* uiManager;
};
