/*
 * hitbox.h
 *
 *  Created on: Nov. 7, 2019
 *      Author: Chris Gritter
 */
#pragma once

#include <iostream>
#include <istream>
#include <ostream>
#include <fstream>
#include <typeinfo>
#include <string>
#include <ctype.h>
#include <unistd.h>

using namespace std;

class Hitbox{
private:
	float tx;
	float ty;
	float bx;
	float by;
public:
	Hitbox();
	Hitbox(float, float, float, float);
	bool overlap(float, float, float, float);
	void updateHitbox(float, float, float, float);
  	void horizontalMovement(int, float);
  	void verticalMovement(int, float);
};
