#include "stdafx.h"
#include "Button.h"

Button::Button()
{
	col = new ObRect();
	buttonIm = new ObImage();
}

Button::~Button()
{
	SafeDelete(col);
	SafeDelete(buttonIm);
}

void Button::Init()
{
}

void Button::Release()
{
}

void Button::Update()
{
	col->Update();
	buttonIm->Update();
}

void Button::LateUpdate()
{
}

void Button::Render()
{
	col->Render();
	buttonIm->Render();
}
