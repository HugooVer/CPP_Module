/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:24:37 by hvercell          #+#    #+#             */
/*   Updated: 2024/01/05 18:41:21 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utiles.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	;
}

PhoneBook::~PhoneBook(void)
{
	;
}

void	PhoneBook::run(void)
{
	//Run all acctions
}

int	PhoneBook::AddContact(int idx)
{
	
}

int	PhoneBook::AddContact(int index)
{
	if (this->contact[8].setFirstName() == SUCCESS)
		if (this->contact[8].setLastName() == SUCCESS)
			if (this->contact[8].setNickname() == SUCCESS)
				if (this->contact[8].setPhoneNumber() == SUCCESS)
					if (this->contact[8].setDarkestSecret() == SUCCESS)
					{
						this->contact[index] = this->contact[8];
						return (SUCCESS);
					}
	std::cout << "Please, complete all fields.\n";
	return (EMPTY);
}