/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:24:37 by hvercell          #+#    #+#             */
/*   Updated: 2024/01/08 00:51:44 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	std::string input = "";
	int iinput = 0;
	int idx = 0;
	while (input != EXIT && input != "3")
	{
		std::cout << "\nAdd a contact\t\t: (1) ADD\nSearch for a contact\t: (2) SEARCH\nExit programe\t\t: (3) EXIT\n";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
		if (input == ADD || input == "1")
		{
			if (idx == 7)
				idx = 0;
			AddContact(idx);
			++idx;
		}
		else if (input == SEARCH || input == "2")
		{
			std::cout << " ------------------------------------------- " << std::endl;
			for (int idx = 0; idx < 8; idx++)
				this->contacts[idx].displayContact(idx);
			std::cout << " ------------------------------------------- " << std::endl;
			input = "";
			while (input != "1" && input != "2" && input != "3" && input != "4" && input != "5" && input != "6" && input != "7" && input != "8")
			{
				std::cout << "More info about contact: ";
				std::getline(std::cin, input);
				if (std::cin.eof())
					exit(0);
			}
			std::stringstream sinput;
			sinput << input;
			sinput >> iinput;
			this->contacts[iinput - 1].displayContactInfo();
		}
	}
	
}

int	PhoneBook::AddContact(int idx)
{
	while (this->contacts[idx].setFirstName() != SUCCESS){}
	while (this->contacts[idx].setLastName() != SUCCESS){}
	while (this->contacts[idx].setNickname() != SUCCESS){}
	while (this->contacts[idx].setPhoneNumber() != SUCCESS){}
	while (this->contacts[idx].setDarkestSecret() != SUCCESS){}
	std::cout << "\nNew contact add in position " << idx + 1 << std::endl;
	return (SUCCESS);
}
