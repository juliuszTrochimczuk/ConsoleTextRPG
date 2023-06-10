#include <iostream>
#include "Character.h"

using namespace std;

#pragma once
class Player : public Character
{
private:
	int maxHealth;
	int gold = 0;
protected:
	bool haveSpecialAttack;
	void SetupHealth(int amount);
	virtual string ActionCommunicate();
	string BlockCommunicate() override;
	virtual int BasicAttack();
	virtual int PowerAttack();
	virtual int SpecialAttack();
	virtual void DoBeforeAction();
public:
	int MakeAction();
	int GetHealth();
	int GetGold();
	void Death() override;
	void Heal(int amount);
	void Loot(int amount);
};

