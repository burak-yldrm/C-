#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog"), brain(new Brain())
{
#ifdef DEBUG
	std::cout << "Dog constructor called" << std::endl;
#endif
}

Dog::Dog(const Dog &copy) : AAnimal()
{
#ifdef DEBUG
	std::cout << "Dog copy constructor called" << std::endl;
#endif
	type = copy.type;
	brain = new Brain(*copy.brain);
}

Dog::~Dog()
{
	delete brain;
#ifdef DEBUG
	std::cout << "Dog destructor called" << std::endl;
#endif
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this == &copy)
		return (*this);
	
	delete brain;

	type = copy.type;
	brain = new Brain(*copy.brain);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
