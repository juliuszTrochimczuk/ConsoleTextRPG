#include "Mage.h"

string Mage::ActionCommunicate()
{
    return "1 - Frost bolt; 2 - Fireball; 3 - Frost Nova";
}

int Mage::BasicAttack()
{
    return Attack(10, 15);
}

int Mage::PowerAttack()
{
    return Attack(8, 25);
}

int Mage::SpecialAttack()
{
    int shieldChance = GameController::GenerateNumber(1, 100);
    if (shieldChance > 50)
    {
        cout << "Your nova created frozen shield around you\n";
        forceBlock = true;
    }
    return Attack(8, 12);
}

void Mage::DoBeforeAction()
{
    forceBlock = false;
}

Mage::Mage()
{
    SetupHealth(100);
    defensiveFactor = 70;
    haveSpecialAttack = true;
}
