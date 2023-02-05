#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->contactCount = 0;
	this->phoneBookIndex = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::addContact()
{
	int	i = phoneBookIndex % 8;

	contacts[i].setIndex(i);
	std::cout << "First Name : ";
	std::getline(std::cin, phName);
	contacts[i].setName(phName);

	std::cout << "Last Name : ";
	std::getline(std::cin, phSurName);
	contacts[i].setSurName(phSurName);

	std::cout << "Nick Name : ";
	std::getline(std::cin, phNickName);
	contacts[i].setNickName(phNickName);

	std::cout << "Phone Number : ";
	std::getline(std::cin, phPhoneNumber);
	contacts[i].setPhoneNumber(phPhoneNumber);

	std::cout << "Darkest secret : ";
	std::getline(std::cin, phDarkestSecret);
	contacts[i].setDarkestSecret(phDarkestSecret);

	phoneBookIndex++;
	if (contactCount < 8)
		contactCount++;
}

void	PhoneBook::printContact(int index)
{
	std::cout << "First name : " + PhoneBook::contacts[index].getName() << std::endl;
	std::cout << "Last name : " + PhoneBook::contacts[index].getSurName() << std::endl;
	std::cout << "Nickname : " + PhoneBook::contacts[index].getNickName() << std::endl;
	std::cout << "Phone number : " + PhoneBook::contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret : " + PhoneBook::contacts[index].getDarkestSecret() << std::endl;
}

std::string	columnCheck(std::string str)
{
	if (str.length() <= 10)
		return (str);
	else
		return (str.substr(0, 9) + '.');
}

void	PhoneBook::searchContact()
{
	int index = 0;
	std::string str;

	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < PhoneBook::contactCount; i++)
	{
		std::cout << std::right << std::setw(10) << contacts[i].getIndex();
		std::cout << "|";
		std::cout << std::right << std::setw(10) << columnCheck(contacts[i].getName());
		std::cout << "|";
		std::cout << std::right << std::setw(10) << columnCheck(contacts[i].getSurName());
		std::cout << "|";
		std::cout << std::right << std::setw(10) << columnCheck(contacts[i].getPhoneNumber());
		std::cout << std::endl;
	}
	while (1)
	{
		std::cout << "Index (to exit: EXIT): ";
		std::getline(std::cin, str);
		if (str == "EXIT")
			return ;
		for (unsigned long i = 0; i < str.length(); i++)
		{
			if (!isdigit(str[i]))
			{
				index = -1;
				break ;
			}
		}
		if (index == 0 && str.length() > 0)
		{
			if (stoi(str) < 0 || stoi(str) >= PhoneBook::contactCount)
				std::cout << "Invalid argument" << std::endl;
			else
				printContact(stoi(str));
		}
		else
			std::cout << "Invalid argument" << std::endl;
	}
}
