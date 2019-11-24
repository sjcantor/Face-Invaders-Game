#pragma once
#include "Hitbox"
#include "Alien"
#include "Bullet"

class professorsface
{
public:
	Hitbox ProfHitbox;
	bool Hit_Prof;
	void Hit_Prof_Test;
	float getcoor;
private:
	float x1, x2, y1, y2;
};
