#include "stdafx.h"
#include "Fade.h"

Fade::Fade()
{
	fadeBox = new ObRect();
	AlphaValue = 0.f;
	
	isVisible = true;
	isFadeIn = false;
}

Fade::~Fade()
{
	SafeDelete(fadeBox);
}

void Fade::Update()
{
	if (!isVisible) return;
	fadeBox->Update();
}

void Fade::Render()
{
	if (!isVisible) return;
	fadeBox->Render();
}

void Fade::LateUpdate()
{
}

void Fade::Release()
{
	SafeDelete(fadeBox);
}

void Fade::FadeIn()
{
	if (AlphaValue <= 1.1f) {
		AlphaValue += 0.1f;
		fadeBox->color = Color(0.f, 0.f, 0.f, AlphaValue);
	}
}

void Fade::FadeOut()
{
	if (AlphaValue >= -0.1f) {
		AlphaValue -= 0.1f;
		fadeBox->color = Color(0.f, 0.f, 0.f, AlphaValue);
	}
}

void Fade::GetFade()
{
	if (isFadeIn) FadeIn();
	else FadeOut();
}

void Fade::SetFade(bool fadeinOnOff)
{
	isFadeIn = fadeinOnOff;
}
