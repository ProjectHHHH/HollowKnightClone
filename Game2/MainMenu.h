#pragma once
#include <vector>

class Button;
class ObImage;

class MainMenu
{
public:
	MainMenu();
	virtual ~MainMenu();
	virtual void Init();
	virtual void Update();
	virtual void Render();
	virtual void LateUpdate();

private:
	ObImage* titleTop;
	ObImage* titleText;
	Button* gameStartBnt;
	Button* gameSettingBnt;
	Button* achievementBnt;
	Button* gameExitBnt;
};

