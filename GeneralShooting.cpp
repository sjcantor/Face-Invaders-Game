#include "GeneralShooting.h"
#include "PowerUps.h"

GeneralShooting::GeneralShooting()
{
}


GeneralShooting::~GeneralShooting()
{

}

void GeneralShooting::UpdateWeaponGrade()
{
	PowerUps pu;
	if (pu.PowerName == "Double Shot"){
		WeaponGrade = "Double Shot";
	}
	else if (pu.PowerName == "Player Shield"){
		WeaponGrade = "Player Shield";
	}
	else if (pu.PowerName == "Faster Shooting"){
		WeaponGrade = "Faster Shooting";
	}
	else if (pu.PowerName == "180-degree gun"){
		WeaponGrade = "180-degree gun";
	}
}

void GeneralShooting::UpdateBulletSpeed()
{
	PowerUps pu;
	if (pu.PowerName == "Double Shot"){
	
	}
	else if (pu.PowerName == "Player Shield"){
	}
	else if (pu.PowerName == "Faster Shooting"){
		BulletSpeed += pu.ReactionOfPower();
	}
	else if (pu.PowerName == "180-degree gun"){
	
	}
}

void GeneralShooting::UpdateBulletDamage()
{
	PowerUps pu;
	if (pu.PowerName == "Double Shot"){
	}
	else if (pu.PowerName == "Player Shield"){
	}
	else if (pu.PowerName == "Faster Shooting"){
		//BulletSpeed += pu.ReactionOfPower();
	}
	else if (pu.PowerName == "180-degree gun"){
	}
}
