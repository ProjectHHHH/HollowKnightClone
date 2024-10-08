#pragma once
class ObRect;
class ObImage;

class Button
{
public:
	Button();
	virtual ~Button();
	virtual void Init();
	virtual void Release();
	virtual void Update();
	virtual void LateUpdate();
	virtual void Render();
private:
	ObRect* col;
	ObImage* buttonIm;
};

