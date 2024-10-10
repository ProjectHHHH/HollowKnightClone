#pragma once
class Cursur;
class Fade;

class UIManager
{
public:
	UIManager();
	virtual ~UIManager();
	virtual void Init();
	virtual void Update();
	virtual void Render();
	virtual void LateUpdate();
	virtual void Release();

private:
	Cursur* cursur;
};

