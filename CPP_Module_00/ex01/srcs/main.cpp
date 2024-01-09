/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:03:27 by hvercell          #+#    #+#             */
/*   Updated: 2024/01/07 18:45:12 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utiles.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook PhoneBook;
	std::cout << "\nWelcome to PhoneBook" << std::endl;
	PhoneBook.run();
	return 1;
}