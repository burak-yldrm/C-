#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat"), brain(new Brain())
{
#ifdef DEBUG
	std::cout << "Cat constructor called" << std::endl;
#endif
}

Cat::Cat(const Cat &copy) : AAnimal()
{
#ifdef DEBUG
	std::cout << "Cat copy constructor called" << std::endl;
#endif
	type = copy.type;
	brain = new Brain(*copy.brain);
}

Cat::~Cat()
{
	delete brain;
#ifdef DEBUG
	std::cout << "Cat destructor called" << std::endl;
#endif
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this == &copy)
		return (*this);
	
	delete brain;
	type = copy.type;
	brain = new Brain(*copy.brain);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meoww" << std::endl;
}
