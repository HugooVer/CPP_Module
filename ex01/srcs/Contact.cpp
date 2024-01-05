/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:57:02 by hvercell          #+#    #+#             */
/*   Updated: 2024/01/05 18:21:59 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utiles.hpp"
#include "Contact.hpp"

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

	std::cout << "\rFirst name : ";
	std::getline(std::cin, tmp);
	if (tmp.length() == 0)
		return (EMPTY);
	this->FirstName = tmp;
	return (SUCCESS);
}

int Contact::setLastName()
{
	std::string tmp;

	std::cout << "\rLast name : ";
	std::getline(std::cin, tmp);
	if (tmp.length() == 0)
		return (EMPTY);
	this->LastName = tmp;
	return (SUCCESS);
}

int Contact::setNickname()
{
	std::string tmp;

	std::cout << "\rNickname : ";
	std::getline(std::cin, tmp);
	if (tmp.length() == 0)
		return (EMPTY);
	this->Nickname = tmp;
	return (SUCCESS);
}

int Contact::setPhoneNumber()
{
	std::string tmp;

	std::cout << "\rPhoneNumber : ";
	std::getline(std::cin, tmp);
	if (tmp.length() == 0)
		return (EMPTY);
	this->PhoneNumber = tmp;
	return (SUCCESS);
}

int Contact::setDarkestSecret()
{
	std::string tmp;

	std::cout << "\rPhoneNumber : ";
	std::getline(std::cin, tmp);
	if (tmp.length() == 0)
		return (EMPTY);
	this->DarkestSecret = tmp;
	return (SUCCESS);
}