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

class Aline {
private: 
	float health; 
	int difficulty; 
	bool regenerationRate; 
	bool alive; 
	
public: 
	vector<int> pathSteps;
	vector<int> nextAlienLoc;
	alien(); 
	void remove(bool alive);
	// Missing health class
	//health::health takeDamage(bool isHit, float playerBulletDmg);
	//health::health regainHealth(bool regenerationRate); 
	//health::health shipCrash(); 
	vector<int> nextSteps(int steps);

};