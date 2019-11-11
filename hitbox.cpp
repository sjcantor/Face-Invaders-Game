/*
 * hitbox.cpp
 *
 *  Created on: Nov. 7, 2019
 *      Author: Chris Gritter
 */
#include "hitbox.h"

using namespace std;

Hitbox::Hitbox() : bx(0), by(0), tx(1), ty(1){ }

Hitbox::Hitbox(float botx, float boty, float topx, float topy) { //bounds must be set for error checking after GUI is finalized
	bx = botx;
	by = boty;
	tx = topx;
	ty = topy;
}


bool Hitbox::overlap(float botx, float boty, float topx, float topy){
	bool overlapped = true;

	if(by > topy || ty < boty){
		overlapped = false;
	}

	if(bx > topx || tx < botx){
		overlapped = false;
	}
	return overlapped;
}

void Hitbox::updateHitbox(float botx, float boty, float topx, float topy){
		bx = botx;
		by = boty;
		tx = topx;
		ty = topy;
}

void Hitbox::horizontalMovement(float speed, float end){
  	float change;
  	while(tx != end){
      change = speed*0.01;
      bx += change;
      tx += change;
      updateHitbox(bx, by, tx, ty);     	
      	
    }
}

void Hitbox::verticalMovement(int speed, float end){
  	float change;
  	while(ty != end){
      change = speed*0.01;
      by += change;
      ty += change;
      updateHitbox(bx, by, tx, ty);     	
      	
    }
  
}


