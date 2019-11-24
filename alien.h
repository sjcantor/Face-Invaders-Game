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

class Alien {
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
	float takeDamage(bool isHit, float playerBulletDmg);//returns health
	float regainHealth(bool regenerationRate); //returns health
	float shipCrash(); //returns health
	vector<int> nextSteps(int steps);

};