#pragma once
class Fade;

class LevelManager
{
public:

	LevelManager();
	virtual ~LevelManager();
	virtual void Init();
	virtual void Update();
	virtual void Render();
	virtual void LateUpdate();
	virtual void Release();

	void PlayFade();
	
	void LoadLevel();

private:


	void FadeIn();
	void FadeOut();

private:
	Fade* fade;

};

