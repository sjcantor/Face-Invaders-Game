#pragma once
#include <string>
using namespace std;
class GeneralShooting
{
public:
	GeneralShooting();
	~GeneralShooting();
	void UpdateWeaponGrade();
	void UpdateBulletSpeed();
	void UpdateBulletDamage();
public:
	string WeaponGrade;
	float BulletSpeed; 
	float BulletDamage;
};

