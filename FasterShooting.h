#pragma once
/*This class allows the player to shoot 
bullets faster and hit more aliens within 
a set amount of time. When the power-up period starts/ends, t
he status of the power-up changes. Similarly, 
bullet position and direction get updated when this power-up is in use.*/
class FasterShooting
{
public:
	FasterShooting();
	~FasterShooting();

	void BulletDirectionUpdate(int direction);
	void WeaponPositionUpdate(int x, int y);
	void PowerUpsStatusChange();
public:
	int BulletDirection;
	int WeaponPosition[2]; 
	int BulletSpeed;
	float PowerLifeTime;
};

