#include "Foe.h"
#include <cstdlib>

Foe::Foe(string _name, int _health, int defensive)
{
	name = _name;
	health = _health;
	defensiveFactor = defensive;
}

void Foe::Death()
{
	cout << "I've died :(";
}

void Foe::DrawAction()
{
	int actionToPerform = DrawNumber(1, 2);
	if (actionToPerform == 1)
	{
		int damage = Attack(10, 15);
		cout << "Basic Attack: " + to_string(damage) + "\n";
	}
	else if (actionToPerform == 2)
	{
		int damage = Attack(8, 25);
		cout << "Power Attack: " + to_string(damage) + "\n";
	}
}
