/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:13:59 by hvercell          #+#    #+#             */
/*   Updated: 2023/12/18 17:10:35 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

#define NO_ARG	"* LOUD AND UNBEARABLE FEEDBACK NOISE *"

static std::string	toUpperString(std::string str)
{
	for (size_t i(0); i < str.length(); ++i)
		str[i] = toupper(str[i]);
	return (str);
}

int main(int ac, char **av)
{
	--ac;
	++av;
	if (ac == 0)
		std::cout << NO_ARG;
	for (int i = 0; i < ac; ++i)
	{
		std::string	arg(av[i]);
		std::cout << toUpperString(arg);
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}