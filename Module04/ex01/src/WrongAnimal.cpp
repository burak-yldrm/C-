#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
#ifdef DEBUG
	std::cout << "WrongAnimal constructor called" << std::endl;
#endif
}

WrongAnimal::WrongAnimal(const std::string &_type) : type(_type)
{
#ifdef DEBUG
	std::cout << "WrongAnimal constructor called" << std::endl;
#endif
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
#ifdef DEBUG
	std::cout << "WrongAnimal copy constructor called" << std::endl;
#endif
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
#ifdef DEBUG
	std::cout << "WrongAnimal destructor called" << std::endl;
#endif
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

