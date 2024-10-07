#include "UIManager.h"
#include "stdafx.h"
#include "MainMenuScene.h"

MainMenuScene::MainMenuScene()
{
	uiManager = new UIManager();
}

MainMenuScene::~MainMenuScene()
{
	SafeDelete(uiManager);
}

void MainMenuScene::Init()
{
}

void MainMenuScene::Release()
{
}

void MainMenuScene::Update()
{
	uiManager->Update();
}

void MainMenuScene::LateUpdate()
{
}

void MainMenuScene::Render()
{
	uiManager->Render();
}

void MainMenuScene::ResizeScreen()
{
}
