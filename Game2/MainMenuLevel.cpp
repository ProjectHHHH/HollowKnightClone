#include "UIManager.h"
#include "stdafx.h"
#include "MainMenuLevel.h"

MainMenuLevel::MainMenuLevel()
{
	uiManager = new UIManager();
}

MainMenuLevel::~MainMenuLevel()
{
	SafeDelete(uiManager);
}

void MainMenuLevel::Init()
{
}

void MainMenuLevel::Release()
{
}

void MainMenuLevel::Update()
{
	uiManager->Update();
}

void MainMenuLevel::LateUpdate()
{
}

void MainMenuLevel::Render()
{
	uiManager->Render();
}

void MainMenuLevel::ResizeScreen()
{
}
