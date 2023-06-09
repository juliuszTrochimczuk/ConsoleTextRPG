#include "Mage.h"

string Mage::ActionCommunicate()
{
    return "1 - Frost bolt; 2 - Fireball";
}

int Mage::BasicAttack()
{
    return Attack(10, 15);
}

int Mage::PowerAttack()
{
    return Attack(8, 25);
}

Mage::Mage()
{
    SetupHealth(100);
    defensiveFactor = 78;
}
