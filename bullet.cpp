/*
 * bullet.cpp
 *
 *  Created on: Nov. 25, 2019
 *      Author: Chris Gritter
 */
#include "bullet.h"

using namespace std;

Bullet::Bullet() : x(0), y(0), speed(1), angle(0){}

Bullet::Bullet(float sx, float sy , float spd, float ang){
	x = sx;
	y = sy;
	speed = spd;
	angle = ang;
}

void Bullet::updateBullet(float nx, float ny){
	x = nx;
	y = ny;
}

void Bullet::bulletMovement(){
	float xincr, yincr, diagLength;
	diagLength = sqrt(((x + speed)*(x + speed)) + ((y + speed)*(y + speed)));
	yincr = sin(angle)*diagLength;
	xincr = cos(angle)*diagLength;
	bool z = 1;
	while(z == 1){
		x = x + xincr;
		y = y + yincr;
		updateBullet(x, y);
		cout << "X: ";
		cout << x << endl;
		cout << "Y: ";
		cout << y << endl;
		if(x > 100 || y > 100){
			z = 0;
		}

	}

}

float Bullet::getX(){
	return x;
}

float Bullet::getY(){
	return y;
}

void Bullet::setX(float nx){
	x = nx;
}
void Bullet::setY(float ny){
	y = ny;
}





