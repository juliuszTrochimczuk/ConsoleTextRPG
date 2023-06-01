#include "Character.h"

int Character::DrawNumber(int min, int max)
{
	srand(time(NULL));
	int randomNumber = rand() % (max - min + 1) + min;
	return randomNumber;
}

bool Character::CanBlock()
{
	int blockChance = DrawNumber(1, 100);
	if (blockChance >= defensiveFactor)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int Character::Attack(int minDamage, int maxDamage)
{
	int damage = DrawNumber(minDamage, maxDamage);
	return damage;
}

void Character::TakeDamage(int damage)
{
	if (CanBlock())
	{
		cout << "I've blocked your attack\n";
		return;
	}
	health -= damage;
	if (health <= 0)
	{
		Death();
	}
}

void Character::Death()
{
	isDead = true;
}
