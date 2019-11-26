#pragma once
#include <iostream>
#include <istream>
#include <ostream>
#include <fstream>
#include <typeinfo>
#include <string>
#include <ctype.h>
#include <vector>
#include <tuple>

using namespace std;

class alien {
private:
	float health;
	int difficulty;
	bool regenerationRate;

	float angle;


public:
	//vector<int> pathSteps;
	//vector<int> nextAlienLoc;
	float xPos, yPos;
	bool alive;


	//constructors
	alien(float x, float y, float ang);
	alien(float initHealth, int initDifficulty, bool intRegRate, float x, float y, float ang);
	alien(float initHealth, int initDifficulty, float x, float y, float ang);


	void remove();
	void updateAlien(float x, float y);
	float takeDamage(float playerBulletDmg);//returns health
	void regainHealth(bool regRate); //returns health
	void shipCrash(); //returns health
	tuple<float, float> nextSteps();
	int getX();
	int getY();
	bool isItAlive();

};