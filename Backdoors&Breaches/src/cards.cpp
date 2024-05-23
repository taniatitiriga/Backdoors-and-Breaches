#include "cards.h"

#include <iostream>


//Attack Cards
attackCard::attackCard(std::string _name, std::string _description)
{
	name = _name;
	description = _description;
}

void attackCard::addDetection(std::string detection)
{
	detections.push_back(detection);
}

void attackCard::addTool(std::string tool)
{
	tools.push_back(tool);
}

void attackCard::print() const
{
	std::cout << name << "\n" << description << "\n";

	if (!detections.empty())
	{
		std::cout << "Detection: \n";
		for (int i = 0; i < detections.size(); i++)
			std::cout << detections[i] << "\n";
	}

	if (!tools.empty())
	{
		std::cout << "Tools: \n";
		for (int i = 0; i < tools.size(); i++)
			std::cout << tools[i] << "\n";
	}
}

//Procedure Cards
procedureCard::procedureCard(std::string _name, std::string _description)
{
	name = _name;
	description = _description;
}

void procedureCard::addTool(std::string tool)
{
	tools.push_back(tool);
}

void procedureCard::print() const
{
	std::cout << name << "\n" << description << "\n";
	
	if (!tools.empty())
	{
		std::cout << "Tools: \n";
		for (int i = 0; i < tools.size(); i++)
			std::cout << tools[i] << "\n";
	}
}

//Inject Cards
injectCard::injectCard(std::string _name, std::string _description, std::string _notes)
{
	name = _name;
	description = _description;
	notes = _notes;
}

void injectCard::print() const
{
	std::cout << name << "\n" << description << "\n" << notes << "\n";
}