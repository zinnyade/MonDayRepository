#include "Animal.h"
#include <iostream>

Animal::Animal(std::string name)
{
	this->name = name;
}

std::string Animal::GetName()
{
	return name;
}

void Animal::Speak()
{
	std::cout << "–Â‚«º" << std::endl;
}