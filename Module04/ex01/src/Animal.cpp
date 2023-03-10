#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
#ifdef DEBUG
	std::cout << "Animal constructor called" << std::endl;
#endif
}

Animal::Animal(const std::string &_type) : type(_type)
{
#ifdef DEBUG
	std::cout << "Animal constructor called" << std::endl;
#endif
}

Animal::Animal(const Animal &copy)
{
#ifdef DEBUG
	std::cout << "Animal copy constructor called" << std::endl;
#endif
	*this = copy;
}

Animal::~Animal()
{
#ifdef DEBUG
	std::cout << "Animal destructor called" << std::endl;
#endif
}

Animal &Animal::operator=(const Animal &copy)
{
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
