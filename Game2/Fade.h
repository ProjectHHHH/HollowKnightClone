#pragma once
class ObRect;

enum class EFadeState
{
	FadeIn  = 0,
	FadeOut,
	None
};

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
	// 0 = fadein 1 = fadeout 2 = nonfade
	void SetFadestate(int fadeNum);

	inline float GetAlphaValue() const { return AlphaValue; }
private:
	ObRect* fadeBox;
	EFadeState fadeState;

	bool isVisible;

	float AlphaValue;

private:
	void FadeIn();
	void FadeOut();
};

