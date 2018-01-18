#pragma once

#include <string>

#include "Stats.h"

class Character
{
public:
	Stats getAttributes()
	{
		return attributes;
	}

	void setAttributes(Stats newAttributes)
	{
		attributes = newAttributes;
	}

	std::string getName()
	{
		return attributes.name;
	}
protected:
	Stats attributes;
};