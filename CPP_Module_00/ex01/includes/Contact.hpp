/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:03:09 by hvercell          #+#    #+#             */
/*   Updated: 2024/01/07 22:17:39 by hvercell         ###   ########.fr       */
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
		void	displayContact(int idx);
		void	printInfoContactFormat(std::string str);
};