#include "Character.h"

int Character::DrawNumber(int min, int max)
{
	srand(time(NULL));
	int randomNumber = rand() % (max - min + 1) + min;
	return randomNumber;
}

int Character::Attack(int minDamage, int maxDamage)
{
	int damage = DrawNumber(minDamage, maxDamage);
	return damage;
}

void Character::TakeDamage(int damage)
{
	health -= damage;
	if (health <= 0)
	{
		Death();
	}
}

void Character::Death()
{
}
