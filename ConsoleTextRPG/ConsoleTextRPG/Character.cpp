#include "Character.h"

string Character::BlockCommunicate()
{
	return string();
}

bool Character::CanBlock()
{
	int blockChance = GameController::GenerateNumber(1, 100);
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
	int damage = GameController::GenerateNumber(minDamage, maxDamage);
	return damage;
}

void Character::TakeDamage(int damage)
{
	if (CanBlock() || forceBlock == true)
	{
		cout << BlockCommunicate() << endl;
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
}
