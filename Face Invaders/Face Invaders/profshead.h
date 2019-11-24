#pragma once
#include "hitbox.h"
#include "alien.h"
#include "bullet."

class professorsface
{
public:
	Hitbox ProfHitbox;
	bool Hit_Prof;
	void getcoor();
	void Hit_Prof_Test();
private:
	float x1 = 0, x2 = 0, y1 = 0, y2 = 0;
};
