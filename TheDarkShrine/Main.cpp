#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <conio.h>

#include "Player.h"
#include "Enemy.h"
#include "BattleSystem.h"
#include "System.h"

int main()
{
	srand((int)time(NULL));

	//Funciona como intermediário no sistema de luta.
	System *gameSystem;

	//Vetor que armazena a equipe de personagens jogáveis.
	std::vector<Player> playableCharacters;
	std::string characterName;

	//Vetor de inimigos.
	std::vector<Enemy> enemies;
	enemies.push_back(Enemy("Goblin", 1, 1, 1, 1, 1));
	
	std::cout << "Bem-vindo ao mundo de The Dark Shrine, jovem aventureiro.\n";
	_getch();

	std::cout << "Insira o seu Nome: ";
	std::cin >> characterName;
	std::cin.ignore();

	std::cout << "Agora iremos definir os attributos de seu personagem. Precione Enter quando estiver pronto! \n";
	_getch();

	playableCharacters.push_back(Player(characterName));

	gameSystem = new BattleSystem(playableCharacters[0], enemies[0]);


	gameSystem->systemAction();

	delete gameSystem;

	system("PAUSE");
	return 0;
}