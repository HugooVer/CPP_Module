/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:24:37 by hvercell          #+#    #+#             */
/*   Updated: 2024/01/07 16:36:25 by hvercell         ###   ########.fr       */
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
	while (this->contact[idx].setFirstName() != SUCCESS)
		while (this->contact[idx].setLastName() != SUCCESS)
			while (this->contact[idx].setNickname() != SUCCESS)
				while (this->contact[idx].setPhoneNumber() != SUCCESS)
					while (this->contact[idx].setDarkestSecret() != SUCCESS)
	return (SUCCESS);
}
