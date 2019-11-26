#include "alien.h"


// TODO: 
	// determine how the pathing is done 
	// where are we drawing the stuff? 
	// determine the health of the alien, as of now it is set to 100


//constructors, default way to create alien
alien::alien(float x, float y, float ang) {
	health = 100.0;
	difficulty = 1;
	alive = true;
	regenerationRate = false;
	xPos = x;
	yPos = y;
	angle = ang;

}

// creating an alien based on initial health, initial level of difficulty, and initial regeneration rate
alien::alien(float initHealth, int initDifficulty, bool intRegRate, float x, float y, float ang) {
	health = initHealth;
	difficulty = initDifficulty;
	regenerationRate = intRegRate;
	alive = true;
	xPos = x;
	yPos = y;
	angle = ang;

}

//create alien based on initial difficulty and regeneration rate false
alien::alien(float initHealth, int initDifficulty, float x, float y, float ang) {
	health = initHealth;
	difficulty = initDifficulty;
	alive = true;
	regenerationRate = false;
	xPos = x;
	yPos = y;
	angle = ang;

}

void alien::updateAlien(float x, float y) {
	xPos = x;
	yPos = y;
}

// ***** need help implementing these classes 
tuple<float, float> alien::nextSteps() {
	float xincr, yincr, diagLength;
	int speed = 0.01;
	diagLength = sqrt(((xPos + speed) * (xPos + speed)) + ((yPos + speed) * (yPos + speed)));
	yincr = sin(angle) * diagLength;
	xincr = cos(angle) * diagLength;
	if (xPos < 100 && yPos < 100) {
		xPos += xincr;
		yPos += yincr;
		//updateBullet(x, y);
		cout << "X: " << endl;
		cout << xPos << endl;
		cout << "Y: " << endl;
		cout << yPos << endl;

	}

	return make_tuple(xPos, yPos);


}


// removing an alien 
void alien::remove() { // i don't think we need this: bool& alienLive
	alive = false;
	health = 0;
	// do the appropriate drawing to remove the alien image from the screen 
}

// do we nee dthe isHit bool? 
float alien::takeDamage(float playerBulletDmg) { //returns health 
	health -= playerBulletDmg;

	return health;
}

bool alien::isItAlive() {
	return alive;
}

//does this need to take a reference?
void alien::regainHealth(bool regRate) { //returns health
	if (regRate) {
		health = 100.0;
	}

}

// the alien ship crashes with a player? Or what does it mean? 
// this class does not make sense to me
void alien::shipCrash() { //returns health  
	alive = false;
	health = 0;

}

int alien::getX() {
	return xPos;
}
int alien::getY() {
	return yPos;
}



