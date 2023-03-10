#include "Animal.hpp"

AAnimal::AAnimal() : type("Animal")
{
#ifdef DEBUG
	std::cout << "Animal constructor called" << std::endl;
#endif
}

AAnimal::AAnimal(const std::string &_type) : type(_type)
{
#ifdef DEBUG
	std::cout << "Animal constructor called" << std::endl;
#endif
}

AAnimal::AAnimal(const AAnimal &copy)
{
#ifdef DEBUG
	std::cout << "Animal copy constructor called" << std::endl;
#endif
	*this = copy;
}

AAnimal::~AAnimal()
{
#ifdef DEBUG
	std::cout << "Animal destructor called" << std::endl;
#endif
}

AAnimal &AAnimal::operator=(const AAnimal &copy)
{
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

std::string AAnimal::getType() const
{
	return (this->type);
}
