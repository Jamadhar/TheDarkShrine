#pragma once

#include <string>

#include "Player.h"
#include "Enemy.h"
#include "Stats.h"

class ActionHandler
{
public:
	virtual bool action(Character& , Character&) = 0;
};
