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
  	while(tx != end){
      bx += speed;
      tx += speed;
      this->updateHitbox(bx, by, tx, ty);

    }
}

void Hitbox::verticalMovement(float speed, float end){
  	while(ty != end){
      by += speed;
      ty += speed;
      this->updateHitbox(bx, by, tx, ty);

    }

}

float Hitbox::getBX(){
	return bx;
}

float Hitbox::getBY(){
	return by;
}

float Hitbox::getTX(){
	return tx;
}

float Hitbox::getTY(){
	return ty;
}


