#pragma once

#include <string>
#include <vector>
#include <string>
#include <vector>

#include "LexicalProcessor.h"
#include "Player.h"
#include "Enemy.h"
#include "System.h"

class BattleSystem : public System
{
private:
	Enemy &enemies;
	Player &character;
	int teste;
public:
	BattleSystem(Player& character, Enemy& enemy) : character(character), enemies(enemy) {};
	void systemAction();
};