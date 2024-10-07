#include "stdafx.h"
#include "Cursur.h"
#include "Fade.h"
#include "UIManager.h"

UIManager::UIManager()
{
	cursur = new Cursur();
	fade = new Fade();
}

UIManager::~UIManager()
{
	SafeDelete(cursur);
	SafeDelete(fade);
}

void UIManager::Init()
{
}

void UIManager::Update()
{
	cursur->Update();
	fade->Update();
}

void UIManager::Render()
{
	cursur->Render();
	fade->Render();
}

void UIManager::LateUpdate()
{
}

void UIManager::Release()
{

}
