#include <iostream>

#include "BattleSystem.h"

void BattleSystem::systemAction()
{
	std::string action;
	std::vector<std::string> commandVector;
	LexicalProcessor lexicalProcessor;
    bool battleStatus = true;
	bool playerPhase = true;

	std::cout << "\nVoce e confrontado por um " + enemies.getName() + ".\n";

	while (battleStatus)
	{
        while (playerPhase)
        {
            std::cin.sync();
            std::cout << "\nQual e a sua acao?\n";
            std::getline(std::cin, action);
            std::cin.ignore(-1);

            commandVector = lexicalProcessor.processData(action);

            if (!commandVector.empty())
            {
                if (actionMap.find(commandVector[0]) != actionMap.end())
                {
                    if (actionMap[commandVector[0]]->action(character, enemies))
                    {
                        playerPhase = false;
                    }
                }
                else
                {
                    std::cout << "\nComando inexistente. Insira outra acao.\n";
                }
            }
            else
            {
                std::cout << "\nComando invalido. Insira outra acao.\n";
            }

            
        }

        enemies.action(character);

        if (enemies.getAttributes().healthPoints <= 0 || character.getAttributes().healthPoints <= 0)
        {
            battleStatus = false;
        }
        else
        {
            playerPhase = true;
        }
	}

    if (character.getAttributes().healthPoints <= 0)
    {
        std::cout << "\nVoce foi derrotado!\n";
    }
    else
    {
        std::cout << "\nVoce venceu!\n";
    }

};