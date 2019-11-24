/*
 * ring.h
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

class Ring {
public:
	Ring();
	Ring(float);

private:
	float radius;
};


