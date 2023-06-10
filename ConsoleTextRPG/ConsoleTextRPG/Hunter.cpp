#include "Hunter.h"

string Hunter::ActionCommunicate()
{
    return "1 - Regular shot; 2 - Percise Shot";
}

int Hunter::BasicAttack()
{
    return Attack(10, 14);
}

int Hunter::PowerAttack()
{
    int damage = Attack(8, 20);
    int armorShred = GameController::GenerateNumber(1, 100);
    if (armorShred > 50)
    {
        cout << "Your arrow shred throw enemy arrmor\n";
        damage *= 2;
    }
    return damage;
}

Hunter::Hunter()
{
    SetupHealth(110);
    defensiveFactor = 62;
    haveSpecialAttack = false;
    forceBlock = false;
}
