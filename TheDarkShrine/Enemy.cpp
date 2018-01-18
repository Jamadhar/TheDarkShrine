#include "Enemy.h"

Enemy::Enemy(std::string name, int strenght, int inteligence, int vitality, int dexterity, int luck)
{
	attributes.name = name;
	attributes.healthPoints = 10;
	attributes.magicPoints = 10;
	attributes.strength = strenght;
	attributes.inteligence = inteligence;
	attributes.vitality = vitality;
	attributes.dexterity = dexterity;
	attributes.luck = luck;
}

void Enemy::action(Character &target)
{
    Stats statsHolder = target.getAttributes();

    std::cout << attributes.name << " causou " << attributes.strength << " de dano a " << target.getAttributes().name;

    statsHolder.healthPoints -= attributes.strength;

	target.setAttributes(statsHolder);

}