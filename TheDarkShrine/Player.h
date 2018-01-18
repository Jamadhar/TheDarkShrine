#pragma once

#include <string>

#include "Character.h"

class Player: public Character
{
public:
	Player(std::string);
	void checkStatus();
	void checkInventory();
	void updateEquipment();
private:
	int experience;
};
