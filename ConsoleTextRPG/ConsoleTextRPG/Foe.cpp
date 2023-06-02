#include "Foe.h"

string Foe::BlockCommunicate()
{
	return name + " has blocked your attack";
}

Foe::Foe(string _name, int _health, int defensive)
{
	name = _name;
	health = _health;
	defensiveFactor = defensive;
}

void Foe::Death()
{
	isDead = true;
	cout << name + " has died\n";
}

int Foe::DrawAction()
{
	int actionToPerform = DrawNumber(1, 2);
	int damage = 0;
	if (actionToPerform == 1)
	{
		damage = Attack(10, 15);
		cout << "Basic Attack: " + to_string(damage) + "\n";
	}
	else if (actionToPerform == 2)
	{
		damage = Attack(8, 25);
		cout << "Power Attack: " + to_string(damage) + "\n";
	}
	return damage;
}
