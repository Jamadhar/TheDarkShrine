#pragma once

#include <map>

#include "ActionHandler.h"
#include "AttackAction.h"
#include "DefenseAction.h"

class System
{
protected:
	std::map<std::string, ActionHandler*> actionMap;
public:
	System()
	{
		actionMap = { {"ATACAR", new AttackAction}, {"DEFENDER", new DefenseAction} };
	}
	virtual void systemAction() = 0;
};
