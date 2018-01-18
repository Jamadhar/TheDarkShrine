#pragma once

#include "string"

#include "Character.h"

class Enemy: public Character
{
public:
	Enemy(std::string, int, int, int, int, int);
    void action(Character&);
};