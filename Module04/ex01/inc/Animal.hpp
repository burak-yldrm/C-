#pragma once

#include <iostream>
//#define DEBUG

class	Animal
{
	protected:
		std::string	type;
	public:
		virtual ~Animal();
		Animal();
		Animal(const std::string &type);
		Animal(const Animal &copy);
		Animal &operator=(const Animal &copy);
		std::string getType() const;
		virtual void makeSound() const;
};
