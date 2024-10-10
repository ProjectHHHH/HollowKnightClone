#include "UIManager.h"
#include "LevelManager.h"
#include "IntroLevel.h"
#include "stdafx.h"
#include "MainMenuLevel.h"

MainMenuLevel::MainMenuLevel()
{
	uiManager = new UIManager();
	levelManager = new LevelManager();
	introLevel = new IntroLevel();
}

MainMenuLevel::~MainMenuLevel()
{
	SafeDelete(uiManager);
	SafeDelete(levelManager)
}

void MainMenuLevel::Init(Player* player, UIManager* uiManager, LevelManager* levelManager)
{
	this->player = player;
}

void MainMenuLevel::Release()
{
}

void MainMenuLevel::Update()
{
	levelManager->PlayFade();

	introLevel->Update();

	uiManager->Update();
	levelManager->Update();
}

void MainMenuLevel::LateUpdate()
{
}

void MainMenuLevel::Render()
{
	introLevel->Render();

	uiManager->Render();
	levelManager->Render();

}

void MainMenuLevel::ResizeScreen()
{
}
