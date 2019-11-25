//============================================================================
// Name        : player.cpp
// Author      : Matthew Kooij
// Version     :
// Course	   : CMPE 320
// Description : Player class
//============================================================================

#include "player.h"

using namespace std;

Player::Player() {
	x = 0;
	y = 0;
	calcAngle(x, y);
}

Player::Player(float ex, float why) {
	x = ex;
	y = why;
	calcAngle(x, y);
}

// Note: Can make moveCW/CCW and ringIn/Out methods private and use in one class "move"
// void Player::move(key inputs) {
//     if(left key == True)
//	       move CCW;
//     elseif(right key == True)
//         move CW;
//     elseif(up key == True)
//	       ring up;
//     elseif(down key == True)
//	       ring down;

void Player::moveCW() {
	// logic
}

void Player::moveCCW() {
	// logic
	//if(leftKey == True
}

void Player::ringIn() {
	// logic

	// if(currentRing == min)
	//    return 0;
	//else
	//    currentRing--;
}

void Player::ringOut() {
	// logic

	// if(currentRing == max)
	//    return 0;
	//else
	//    currentRing++;
}

void Player::shoot() {
	// logic
	// if(spacebar == True)
	//    shoot;
}

void Player::calcAngle(float x, float y) {
	radians = atan(x/y);	// return angle in radians
}

float Player::getAngle() {
	return radians;
}
