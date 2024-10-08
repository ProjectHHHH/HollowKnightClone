#include "UIManager.h"
#include "LevelManager.h"
#include "stdafx.h"
#include "MainMenuLevel.h"

MainMenuLevel::MainMenuLevel()
{
	uiManager = new UIManager();
	levelManager = new LevelManager();
}

MainMenuLevel::~MainMenuLevel()
{
	SafeDelete(uiManager);
	SafeDelete(levelManager)
}

void MainMenuLevel::Init(Player* player)
{
	//player = new Player();
}

void MainMenuLevel::Release()
{
}

void MainMenuLevel::Update()
{
	levelManager->PlayFade();

	uiManager->Update();
	levelManager->Update();
}

void MainMenuLevel::LateUpdate()
{
}

void MainMenuLevel::Render()
{
	uiManager->Render();
	levelManager->Render();
}

void MainMenuLevel::ResizeScreen()
{
}
