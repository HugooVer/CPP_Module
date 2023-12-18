/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:03:09 by hvercell          #+#    #+#             */
/*   Updated: 2023/12/18 19:09:59 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utiles.hpp"

class Contact {

	private:

		std::string	_FirstName;
		std::string _LastName;
		std::string _Nickname;
		std::string _PhoneNumber;
		std::string _DarkestSecret;

	public:

		Contact(void);
		~Contact(void);

		int		setFirstName();
		int		setLastName();
		int		setNickname();
		int		setPhoneNumber();
		int		setDarkestSecret();

		void	displayContactInfo();
		void	displayRepertory(int Index);
		void	printInfoFormatRepertory(std::string str);
};