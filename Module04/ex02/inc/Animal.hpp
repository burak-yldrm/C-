#pragma once

#include <iostream>
//#define DEBUG

class	AAnimal
{
	protected:
		std::string	type;
	public:
		virtual ~AAnimal();
		AAnimal();
		AAnimal(const std::string &type);
		AAnimal(const AAnimal &copy);
		AAnimal &operator=(const AAnimal &copy);
		std::string getType() const;
		virtual void makeSound() const = 0;
};
