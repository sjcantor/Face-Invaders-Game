#pragma once
#include <string>
using namespace std;

/*
This is the general class for power-ups, 
including PowerPickUp() and ReactionOfPower() functions. 
This class has three variables: powerName, bulletNumber, and powerLifeTime. 
The purpose of this class is to interact with the player, 
the ship, and the rest of the power-up classes that unlock a special ability
*/
class PowerUps
{
public:
	PowerUps();
	~PowerUps();
	void PowerPickUp(string name);
	int ReactionOfPower();
public:
	string PowerName;
	int BulletNumber;
	float PowerLifeTime;
};

