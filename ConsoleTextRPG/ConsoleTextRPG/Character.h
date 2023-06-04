#include <iostream>;
#include <string>;
#include "GameController.h"

using namespace std;

#pragma once
class Character
{
private:
	bool CanBlock();
protected:
	int health;
	int defensiveFactor;
	virtual string BlockCommunicate();
public:
	bool isDead;
	int Attack(int minDamage, int maxDamage);
	void TakeDamage(int damage);
	virtual void Death();
};