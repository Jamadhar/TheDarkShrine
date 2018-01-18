#pragma once

#include "Stats.h"

class Equipment
{
private:
	Equipment();
	virtual void getStat() = 0;
protected:
	Stats attributes;
};