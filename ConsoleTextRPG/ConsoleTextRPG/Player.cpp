#include "Player.h"

void Player::SetupHealth(int amount)
{
    maxHealth = amount;
    health = maxHealth;
}

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

int Player::GetGold()
{
    return gold;
}

void Player::Death()
{
    cout << endl;
    cout << "Your journey ends here... During your travel you've collected: " + to_string(gold) + " gold\n";
    exit(0);
}

void Player::Heal(int amount)
{
    health += amount;
    if (health > maxHealth)
    {
        health = maxHealth;
    }
}

void Player::Loot(int amount)
{
    gold += amount;
}