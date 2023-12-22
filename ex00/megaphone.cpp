/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:13:59 by hvercell          #+#    #+#             */
/*   Updated: 2023/12/22 16:56:53 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

#define NO_ARG	"* LOUD AND UNBEARABLE FEEDBACK NOISE *"

static std::string	toUpperString(std::string str)
{
	std::locale loc;
	for (size_t i(0); i < str.length(); ++i)
		str[i] = toupper(str[i], loc);
	return (str);
}

int main(int ac, char **av)
{
	if (ac <= 1)
		std::cout << NO_ARG;
	for (int i = 1; i < ac; ++i)
		std::cout << toUpperString(std::string(av[i]));
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}
