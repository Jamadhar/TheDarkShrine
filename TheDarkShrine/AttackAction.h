#pragma once

#include <iostream>

#include "ActionHandler.h"

class AttackAction : public ActionHandler
{
public:

	bool action(Character &attacker, Character &target)
	{
		Stats statsHolder;
		
		statsHolder = target.getAttributes();

		statsHolder.healthPoints -= attacker.getAttributes().strength;

		std::cout << "\n" << attacker.getAttributes().name << " Cousou " << attacker.getAttributes().strength << " a " << target.getAttributes().name << "\n";

		target.setAttributes(statsHolder);

		return true;
	}

};