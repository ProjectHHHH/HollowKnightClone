#pragma once
class ObRect;

class Fade
{
public:
	Fade();
	virtual ~Fade();

	virtual void Update();
	virtual void Render();
	virtual void LateUpdate();
	virtual void Release();

	void GetFade();
	void SetFade(bool fadeinOnOff);

private:
	ObRect* fadeBox;

	bool isVisible;
	bool isFadeIn;

	float AlphaValue;

private:
	void FadeIn();
	void FadeOut();
};

