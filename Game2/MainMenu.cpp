#include "stdafx.h"
#include "Button.h"
#include "UIManager.h"
#include "Cursur.h"
#include "MainMenu.h"

MainMenu::MainMenu()
{
	titleTop = new ObImage(L"Menu/prompt_divider.png");
	titleTop->scale = Vector2(900.f, 40.f);
	titleTop->SetWorldPos(Vector2(10.f, 400.f));
	titleText = new ObImage(L"Menu/Text/HollowKnight.png");
	titleText->scale = Vector2(950.f, 320.f);
	titleText->SetWorldPos(Vector2(10.f, 300.f));
	gameStartBnt = new Button(L"Menu/Text/GameStart.png");
	gameStartBnt->buttonIm->scale = Vector2(450.f, 125.f);
	gameStartBnt->buttonIm->SetLocalPos(Vector2(-10.f, 0.f));
	gameStartBnt->col->scale = Vector2(180.f, 50.f);
	gameStartBnt->col->SetWorldPos(Vector2(10.f, 160.f));
	gameSettingBnt = new Button(L"Menu/Text/GameSetting.png");
	gameSettingBnt->buttonIm->scale = Vector2(450.f, 125.f);
	gameSettingBnt->buttonIm->SetLocalPos(Vector2(-10.f, 0.f));
	gameSettingBnt->col->scale = Vector2(180.f, 50.f);
	gameSettingBnt->col->SetWorldPos(Vector2(10.f, 55.f));
	achievementBnt = new Button(L"Menu/Text/Achievement.png");
	achievementBnt->buttonIm->scale = Vector2(450.f, 125.f);
	achievementBnt->buttonIm->SetLocalPos(Vector2(-10.f, 0.f));
	achievementBnt->col->scale = Vector2(115.f, 50.f);
	achievementBnt->col->SetWorldPos(Vector2(13.f, -40.f));
	gameExitBnt = new Button(L"Menu/Text/GameExit.png");
	gameExitBnt->buttonIm->scale = Vector2(450.f, 125.f);
	gameExitBnt->buttonIm->SetLocalPos(Vector2(-10.f, 0.f));
	gameExitBnt->col->scale = Vector2(180.f, 50.f);
	gameExitBnt->col->SetWorldPos(Vector2(10.f, -140.f));
	
	Slider = new ObImage(L"Menu/Slider.png");
	Slider->maxFrame.x = 11;
	Slider->scale = Vector2(60.f, 60.f);

	collisionState = ECollisionState::None;
	
}

MainMenu::~MainMenu()
{
	SafeDelete(titleTop);
	SafeDelete(titleText);
	SafeDelete(gameStartBnt);
	SafeDelete(gameSettingBnt);
	SafeDelete(achievementBnt);
	SafeDelete(gameExitBnt);
	SafeDelete(Slider);
}

void MainMenu::Init(class UIManager* uiManager, class LevelManager* levelManager)
{
	this->uiManager = uiManager;
	this->levelManager = levelManager;
}

void MainMenu::Update()
{

	CollideWithMouse();

	titleTop->Update();
	titleText->Update();
	gameStartBnt->Update();
	gameSettingBnt->Update();
	achievementBnt->Update();
	gameExitBnt->Update();
	Slider->Update();
}

void MainMenu::Render()
{
	titleTop->Render();
	titleText->Render();
	gameStartBnt->Render();
	gameSettingBnt->Render();
	achievementBnt->Render();
	gameExitBnt->Render();
	Slider->Render();
}

void MainMenu::LateUpdate()
{
}

void MainMenu::CollideWithMouse()
{
	if (uiManager->cursur->col->Intersect(gameStartBnt->col) && collisionState != ECollisionState::GameStartBnt)
	{
		Slider->isVisible = true;
		Slider->SetWorldPos(Vector2(-100.f, 163.f));

		collisionState = ECollisionState::GameStartBnt;
		cout << Slider->isVisible << endl;
	}
	else if(!uiManager->cursur->col->Intersect(gameStartBnt->col) && collisionState == ECollisionState::GameStartBnt)
	{
		Slider->isVisible = false;
		Slider->SetWorldPos(Vector2(9500.f, 9500.f));
		Slider->ChangeAnim(ANIMSTATE::ONCE, 0.03f);

		collisionState = ECollisionState::None;
		cout << Slider->isVisible << endl;
	}
	else if (uiManager->cursur->col->Intersect(gameSettingBnt->col) && collisionState != ECollisionState::GameSettingBnt)
	{
		Slider->isVisible = true;
		Slider->SetWorldPos(Vector2(-100.f, 58.f));

		collisionState = ECollisionState::GameSettingBnt;
		cout << Slider->isVisible << endl;
	}
	else if (!uiManager->cursur->col->Intersect(gameSettingBnt->col) && collisionState == ECollisionState::GameSettingBnt)
	{
		Slider->isVisible = false;
		Slider->SetWorldPos(Vector2(9500.f, 9500.f));
		Slider->ChangeAnim(ANIMSTATE::ONCE, 0.03f);

		collisionState = ECollisionState::None;
		cout << Slider->isVisible << endl;
	}
	else if (uiManager->cursur->col->Intersect(achievementBnt->col) && collisionState != ECollisionState::AchievementBnt)
	{
		Slider->isVisible = true;
		Slider->SetWorldPos(Vector2(-100.f, -40.f));

		collisionState = ECollisionState::AchievementBnt;
		cout << Slider->isVisible << endl;
	}
	else if (!uiManager->cursur->col->Intersect(achievementBnt->col) && collisionState == ECollisionState::AchievementBnt)
	{
		Slider->isVisible = false;
		Slider->SetWorldPos(Vector2(9500.f, 9500.f));
		Slider->ChangeAnim(ANIMSTATE::ONCE, 0.03f);

		collisionState = ECollisionState::None;
		cout << Slider->isVisible << endl;
	}
	else if (uiManager->cursur->col->Intersect(gameExitBnt->col) && collisionState != ECollisionState::GameExitBnt)
	{
		Slider->isVisible = true;
		Slider->SetWorldPos(Vector2(-100.f, -140.f));

		collisionState = ECollisionState::GameExitBnt;
		cout << Slider->isVisible << endl;
	}
	else if (!uiManager->cursur->col->Intersect(gameExitBnt->col) && collisionState == ECollisionState::GameExitBnt)
	{
		Slider->isVisible = false;
		Slider->SetWorldPos(Vector2(9500.f, 9500.f));
		Slider->ChangeAnim(ANIMSTATE::ONCE, 0.03f);

		collisionState = ECollisionState::None;
		cout << Slider->isVisible << endl;
	}
}
