#include "PowerUps.h"
#include "FasterShooting.h"

PowerUps::PowerUps()
{
}

PowerUps::~PowerUps()
{

}
void PowerUps::PowerPickUp(string name)
{
	this->PowerName = name;
}
int  PowerUps::ReactionOfPower()
{
	if (PowerName == ""){
		return 0;
	}
	if (PowerName == "Double Shot"){
		//call class double shot
	}
	else if (PowerName == "Player Shield"){
		//call class player shield
	}
	else if (PowerName == "180-Degree Gun"){
		//call class 180-Degree Gun	
	}
	else if (PowerName == "Faster Shooting"){
		//call class Faster shooting
		FasterShooting fs;
		return fs.BulletSpeed;
	}		
	return 0;
}