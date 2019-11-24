/*
 * player.h
 *
 *  Created on: Nov. 11, 2019
 *      Author: Matthew Kooij
 */

#pragma once

#include <iostream>
#include <fstream>
#include <typeinfo>
#include <string>
#include <ctype.h>
#include <unistd.h>
#include <math.h>

using namespace std;

class Player {
public:
	Player();
	Player(float, float);
	void moveCW();
	void moveCCW();
	void ringIn();
	void ringOut();
	void shoot();
	float getAngle();
	bool shipHit(bool);

private:
	float x, y, radians;
	int currentRing = 0;// default to innermost ring

	void calcAngle(float, float);
};

