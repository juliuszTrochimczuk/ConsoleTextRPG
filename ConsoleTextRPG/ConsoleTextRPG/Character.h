#include <iostream>;
#include <string>;

using namespace std;

#pragma once
class Character
{
private:
	int DrawNumber(int min, int max);
public:
	string name;
	int health;
	int Attack(int minDamage, int maxDamage);
	void TakeDamage(int damage);
	virtual void Death();
};