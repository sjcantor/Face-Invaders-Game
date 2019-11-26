#include "FasterShooting.h"


FasterShooting::FasterShooting()
{
}


FasterShooting::~FasterShooting()
{
}

void FasterShooting::BulletDirectionUpdate(int direction)
{
	this->BulletDirection = direction;
}
void FasterShooting::WeaponPositionUpdate(int x, int y)
{
	this->WeaponPosition[0] = x;
	this->WeaponPosition[1] = y;
}

void FasterShooting::PowerUpsStatusChange()
{

}