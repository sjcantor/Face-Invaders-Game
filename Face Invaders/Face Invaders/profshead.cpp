#include <iostream>
#include <Windows.h>
#include "profshead.h"

using namespace std;

void professorsface::getcoor() {
	x1 = 0;
	x2 = 0;
	y1 = 0;
	y2 = 0;
}
professorsface.ProfHitbox(x1, x2, y1, y2);

void professorsface::Hit_Prof_Test(Alien alien, Bullet bullet) {
	if Alien.HitBox.overlap(x1, y1, x2, y2) && Alien.HitBox.overlap(x1, y1, x2, y2)
		Hit_Prof = true;
	else
		Hit_Prof = false;
}