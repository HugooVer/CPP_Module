/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:03:09 by hvercell          #+#    #+#             */
/*   Updated: 2024/01/05 18:17:25 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utiles.hpp"

class Contact {

	private:

		std::string	FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarkestSecret;

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