#include <iostream>;
#include <string>;

using namespace std;

#pragma once
class Character
{
private:
	bool CanBlock();
protected:
	int health;
	int defensiveFactor;
	int DrawNumber(int min, int max);
public:
	string name;
	bool isDead;
	int Attack(int minDamage, int maxDamage);
	void TakeDamage(int damage);
	virtual void Death();
};