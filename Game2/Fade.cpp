#include "stdafx.h"
#include "Fade.h"

Fade::Fade()
{
	fadeBox = new ObRect();
	AlphaValue = 0.f;
	
	isVisible = true;
	fadeState = EFadeState::None;
}

Fade::~Fade()
{
	SafeDelete(fadeBox);
}

void Fade::Update()
{
	if (!isVisible || fadeState == EFadeState::None) return;
	fadeBox->Update();
}

void Fade::Render()
{
	if (!isVisible || fadeState == EFadeState::None) return;
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
	if (fadeState == EFadeState::FadeIn) FadeIn();
	else if (fadeState == EFadeState::FadeOut)FadeOut();
}

void Fade::SetFadestate(int fadeNum)
{
	switch (fadeNum)
	{
	case 0 :
		fadeState = EFadeState::FadeIn;
		break;
	case 1:
		fadeState = EFadeState::FadeOut;
		break;
	default:
		fadeState = EFadeState::None;
		break;
	}
}
