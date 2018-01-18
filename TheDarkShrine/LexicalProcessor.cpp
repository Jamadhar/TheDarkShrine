#include <iostream>
#include <vector>
#include <string>
#include <regex>

#include "LexicalProcessor.h"

#define COMMAND_REGEX std::regex("[a-zA-Z]*[a|e|i|o|u|A|E|I|O|U][r|R]\\s([a-zA-Z]*)(\\s[a-zA-Z]*)?")

std::vector<std::string>LexicalProcessor::processData(std::string command)
{
	std::vector<std::string> commandVector;
	std::size_t subStringBegin = 0;
	std::size_t subStringEnd;
	
	if (std::regex_search(command, COMMAND_REGEX))
	    { 
		    subStringEnd = command.find(" ");

		    while (subStringEnd != std::string::npos)
		    {
			    commandVector.push_back(command.substr(subStringBegin, subStringEnd - subStringBegin));

			    subStringBegin = subStringEnd + 1;
			    subStringEnd = command.find(" ", subStringEnd + 1);
		    }

		    commandVector.push_back(command.substr(subStringBegin, command.size() - 1));
	    }
	
	return commandVector;
}