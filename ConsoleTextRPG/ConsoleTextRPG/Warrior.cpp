#include "Warrior.h"

string Warrior::ActionCommunicate()
{
	return "1 - Sword slash; 2 - Shield Bash";
}

int Warrior::BasicAttack()
{
	return Attack(12, 20);
}

int Warrior::PowerAttack()
{
	return Attack(18, 34);
}

Warrior::Warrior()
{
	SetupHealth(125);
	defensiveFactor = 56;
}
