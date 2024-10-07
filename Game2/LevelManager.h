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

	void ChangeScene();
	
private:
	void LoadNewScene();
	void UnloadCurScene();

private:
	Fade* fade;

};

