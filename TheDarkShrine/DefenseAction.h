#pragma once

#include <iostream>

#include "ActionHandler.h"

class DefenseAction : public ActionHandler
{
public:
	bool action(Character &defender, Character &target)
	{
		std::cout << "Voce defende.";

		return true;
	}
};