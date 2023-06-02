#include "Player.h"

string Player::ActionCommunicate()
{
    return "Test123";
}

string Player::BlockCommunicate()
{
    return "You've blocked incoming attack";
}

int Player::BasicAttack()
{
    return 0;
}

int Player::PowerAttack()
{
    return 0;
}

int Player::MakeAction()
{
    cout << "Your's health: " + to_string(health) << endl;
    cout << "It's your turn: " + ActionCommunicate() << endl;
    int choiceMake;
    int damage;
    cin >> choiceMake;
    if (choiceMake == 1)
    {
        damage = BasicAttack();
    }
    else if (choiceMake == 2)
    {
        damage = PowerAttack();
    }
    cout << "Your attack has made: " + to_string(damage) << endl;
    return damage;
}

int Player::GetHealth()
{
    return health;
}

void Player::Death()
{
    cout << "Your journey ends here\n";
    exit(0);
}
