#include "Brain.hpp"

Brain::Brain()
{
#ifdef DEBUG
	std::cout << "Brain constructor called" << std::endl;
#endif
}

Brain::Brain(const Brain &copy)
{
#ifdef DEBUG
	std::cout << "Brain copy constructor called" << std::endl;
#endif
	*this = copy;
}

Brain &Brain::operator=(const Brain &copy)
{
#ifdef DEBUG
	std::cout << "Brain assignation operator called" << std::endl;
#endif
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
#ifdef DEBUG
	std::cout << "Brain destructor called" << std::endl;
#endif
}

