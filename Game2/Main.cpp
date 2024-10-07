#include "stdafx.h"
#include "MainMenuScene.h"
#include "Main.h"

void Main::Init()
{
	mainMenuScene = new MainMenuScene();
	LIGHT->SetLightPos(Vector2(0.f,0.f),1);
	LIGHT->light.lights->radius = 7000.f;
}

void Main::Release()
{
	SafeDelete(mainMenuScene);
}

void Main::Update()
{
	mainMenuScene->Update();
}

void Main::LateUpdate()
{
	
}

void Main::Render()
{
	mainMenuScene->Render();
}

void Main::ResizeScreen()
{
}

int WINAPI wWinMain(HINSTANCE instance, HINSTANCE prevInstance, LPWSTR param, int command)
{
	app.SetAppName(L"Game2");
	app.SetInstance(instance);
	app.InitWidthHeight(1800.0f, 900.0f);
	WIN->Create();
	Main* main = new Main();
	int wParam = (int)WIN->Run(main);
	SafeDelete(main);
	WIN->Destroy();
	WIN->DeleteSingleton();
	
	return wParam;
}