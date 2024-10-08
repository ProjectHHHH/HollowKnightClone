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

void LevelManager::PlayFade()
{
	if(fade->GetFadeState() == EFadeState::FadeIn)
		FadeIn();
	if (fade->GetFadeState() == EFadeState::FadeOut)
		FadeOut();
}

void LevelManager::FadeIn()
{
	fade->SetFadestate(0);
	fade->GetFade();
}

void LevelManager::FadeOut()
{
	fade->SetFadestate(1);
	fade->GetFade();
}
