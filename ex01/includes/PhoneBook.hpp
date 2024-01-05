/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:55:08 by hvercell          #+#    #+#             */
/*   Updated: 2024/01/05 18:33:04 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook {
private:
	Contact contact[9];

public:
	int	nb_contact;

	PhoneBook(void);
	~PhoneBook(void);

	void	run(void);
	int		AddContact(int idx);
	void	search(void);

};