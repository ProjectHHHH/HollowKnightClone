#pragma once
#include "Level.h"

class ObImage;
class IntroLevel : protected Level
{
public:
	IntroLevel();
	virtual ~IntroLevel();
	virtual void Init(Player* player) override;
	virtual void Release() override;
	virtual void Update() override;
	virtual void LateUpdate() override;
	virtual void Render() override;
	virtual void ResizeScreen() override;

private:
	ObImage* bg;
	

};

