#include "Foe.h"

string Foe::BlockCommunicate()
{
	return name + " has blocked your attack";
}

Foe::Foe(FeoData data)
{
	name = data.name;
	health = data.health;
	defensiveFactor = data.defensive;
	minBaseAttack = data.minBaseAttack;
	maxBaseAttack = data.maxBaseAttack;
	minPowerAttack = data.minPowerAttack;
	maxPowerAttack = data.maxPowerAttack;
}

void Foe::Death()
{
	isDead = true;
	cout << name + " has died\n";
}

int Foe::DrawAction()
{
	cout << name + " has health: " + to_string(health) << endl;
	int actionToPerform = GameController::GenerateNumber(1, 2);
	int damage = 0;
	cout << name + " is making: ";
	if (actionToPerform == 1)
	{
		damage = Attack(minBaseAttack, maxBaseAttack);
		cout << "Basic Attack: ";
	}
	else if (actionToPerform == 2)
	{
		damage = Attack(minPowerAttack, maxPowerAttack);
		cout << "Power Attack: ";
	}
	cout << to_string(damage) << endl;
	return damage;
}
