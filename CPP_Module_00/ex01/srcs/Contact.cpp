/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:57:02 by hvercell          #+#    #+#             */
/*   Updated: 2024/01/08 00:49:12 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Utiles.hpp"

Contact::Contact(void)
{
	;
}

Contact::~Contact(void)
{
	;
}

int Contact::setFirstName()
{
	std::string tmp;
	std::cout << "\rFirst name\t: ";
	std::getline(std::cin, tmp);
	if (std::cin.eof())
			exit(0);
	if (tmp.length() == 0)
		return (EMPTY);
	this->FirstName = tmp;
	return (SUCCESS);
}

int Contact::setLastName()
{
	std::string tmp;
	std::cout << "\rLast name\t: ";
	std::getline(std::cin, tmp);
	if (std::cin.eof())
			exit(0);
	if (tmp.length() == 0)
		return (EMPTY);
	this->LastName = tmp;
	return (SUCCESS);
}

int Contact::setNickname()
{
	std::string tmp;
	std::cout << "\rNickname\t: ";
	std::getline(std::cin, tmp);
	if (std::cin.eof())
			exit(0);
	if (tmp.length() == 0)
		return (EMPTY);
	this->Nickname = tmp;
	return (SUCCESS);
}

int Contact::setPhoneNumber()
{
	std::string tmp;
	std::cout << "\rPhone Number\t: ";
	std::getline(std::cin, tmp);
	if (std::cin.eof())
			exit(0);
	if (tmp.length() == 0)
		return (EMPTY);
	this->PhoneNumber = tmp;
	return (SUCCESS);
}

int Contact::setDarkestSecret()
{
	std::string tmp;
	std::cout << "\rDarkest Secret\t: ";
	std::getline(std::cin, tmp);
	if (std::cin.eof())
			exit(0);
	if (tmp.length() == 0)
		return (EMPTY);
	this->DarkestSecret = tmp;
	return (SUCCESS);
}

void	Contact::printInfoContactFormat(std::string str)
{
	if (str.length() > 10)
		std::cout << "|" << str.substr(0, 9) + '.';
	else
		std::cout << "|" << std::setw(10) << str;
	
}

void Contact::displayContact(int idx)
{
	// (void) idx;
	std::cout << "|" << std::right << std::setw(10) << idx + 1;
	printInfoContactFormat(this->FirstName);
	printInfoContactFormat(this->LastName);
	printInfoContactFormat(this->Nickname);
	std::cout << "|" << std::endl;
}

void Contact::displayContactInfo()
{
	std::cout << "First name\t: " << this->FirstName << std::endl;
	std::cout << "Last name\t: " << this->LastName << std::endl;
	std::cout << "Nickname\t: " << this->Nickname << std::endl;
	std::cout << "Phone number\t: " << this->PhoneNumber << std::endl;
	std::cout << "Darkest secret\t: " << this->DarkestSecret << std::endl;
}