#include "stdafx.h"
#include "Button.h"
#include "MainMenu.h"

MainMenu::MainMenu()
{
	titleTop = new ObImage(L"Menu/prompt_divider.png");
	titleTop->scale = Vector2(80.f, 50.f);
	titleText = new ObImage(L"Menu/Text/HollowKnight.png");
	gameStartBnt = new Button(L"Menu/Text/GameStart.png");
	gameSettingBnt = new Button(L"Menu/Text/GameSetting.png");
	achievementBnt = new Button(L"Menu/Text/Achievement.png");
	gameExitBnt = new Button(L"Menu/Text/GameExit.png");
}

MainMenu::~MainMenu()
{
	SafeDelete(titleTop);
	SafeDelete(titleText);
	SafeDelete(gameStartBnt);
	SafeDelete(gameSettingBnt);
	SafeDelete(achievementBnt);
	SafeDelete(gameExitBnt);
}

void MainMenu::Init()
{
}

void MainMenu::Update()
{
	titleTop->Update();
	titleText->Update();
	gameStartBnt->Update();
	gameSettingBnt->Update();
	achievementBnt->Update();
	gameExitBnt->Update();
}

void MainMenu::Render()
{
	titleTop->Render();
	titleText->Render();
	gameStartBnt->Render();
	gameSettingBnt->Render();
	achievementBnt->Render();
	gameExitBnt->Render();
}

void MainMenu::LateUpdate()
{
}
