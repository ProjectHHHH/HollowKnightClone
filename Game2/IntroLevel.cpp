#include "stdafx.h"
#include "Player.h"
#include "UIManager.h"
#include "LevelManager.h"
#include "IntroLevel.h"
#include "MainMenu.h"

IntroLevel::IntroLevel()
{
	bg = new ObImage(L"Background/wallpaperflare.com_wallpaper.jpg");
	bg->scale = Vector2(1900.f, 1000.f);
	bg->SetWorldPos(Vector2(0.f, 0.f));

	mainMenu = new MainMenu();
}

IntroLevel::~IntroLevel()
{
	SafeDelete(bg);
	SafeDelete(mainMenu);
}

void IntroLevel::Init(Player* player, UIManager* uiManager, LevelManager* levelManager)
{
	this->player = player;
	this->uiManager = uiManager;
	this->levelManager = levelManager;

	mainMenu->Init(this->uiManager, this->levelManager);
}

void IntroLevel::Release()
{
}

void IntroLevel::Update()
{
	bg->Update();
	mainMenu->Update();
}

void IntroLevel::LateUpdate()
{
}

void IntroLevel::Render()
{
	bg->Render();
	mainMenu->Render();
}

void IntroLevel::ResizeScreen()
{
}
