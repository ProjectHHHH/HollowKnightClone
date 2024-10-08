#include "stdafx.h"
#include "Fade.h"

#include "LevelManager.h"

LevelManager::LevelManager()
{
	fade = new Fade();
}

LevelManager::~LevelManager()
{
	SafeDelete(fade);
}

void LevelManager::Init()
{
}

void LevelManager::Update()
{
	fade->Update();
}

void LevelManager::Render()
{
	fade->Render();
}

void LevelManager::LateUpdate()
{
}

void LevelManager::Release()
{
}

void LevelManager::ChangeScene()
{
	LoadNewScene();
}

void LevelManager::LoadNewScene()
{
	fade->SetFadestate(1);
	fade->GetFade();
}

void LevelManager::UnloadCurScene()
{
}
