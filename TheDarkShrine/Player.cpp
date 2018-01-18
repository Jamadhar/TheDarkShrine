#include <iostream>

#include "Player.h"

#define RANDOM_NUM (rand() % static_cast<int>(9) + 1)

Player::Player(std::string name)
{
	Stats initialStatus;
	char confirm = 'n';
	initialStatus.name = name;

	while (confirm != 'y')
	{
		initialStatus.magicPoints = 0;
		initialStatus.healthPoints = 0;
		initialStatus.strength = RANDOM_NUM;
		initialStatus.inteligence = RANDOM_NUM;
		initialStatus.vitality = RANDOM_NUM;
		initialStatus.dexterity = RANDOM_NUM;
		initialStatus.luck = RANDOM_NUM;

		for (unsigned int i = 0; i < initialStatus.vitality; i++)
		{
			initialStatus.healthPoints += (rand() % static_cast<int>(8 - 1));
		}

		for (unsigned int i = 0; i < initialStatus.inteligence; i++)
		{
			initialStatus.magicPoints += (rand() % static_cast<int>(8 - 1));
		}

		

		std::cout << "HP: " << initialStatus.healthPoints << "\n";
		std::cout << "MP: " << initialStatus.magicPoints << "\n";
		std::cout << "\nStrength: " << initialStatus.strength << "\n";
		std::cout << "Intelligence: " << initialStatus.inteligence << "\n";
		std::cout << "Vitality: " << initialStatus.vitality << "\n";
		std::cout << "Dexterity: " << initialStatus.dexterity << "\n";
		std::cout << "Luck: " << initialStatus.luck << "\n";

		std::cout << "Voce deseja manter estes atributos? y/n\n";
		std::cin >> confirm;
		std::cin.ignore();
	}
	attributes = initialStatus;
}

void Player::checkStatus()
{
	std::cout << "\nStrength: " << this->attributes.strength << "\n";
	std::cout << "Intelligence: " << this->attributes.inteligence << "\n";
	std::cout << "Vitality: " << this->attributes.vitality << "\n";
	std::cout << "Dexterity: " << this->attributes.dexterity << "\n";
	std::cout << "Luck: " << this->attributes.luck << "\n";
}

void Player::checkInventory()
{

}

void Player::updateEquipment()
{

}