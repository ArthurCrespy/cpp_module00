/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 12:27:02 by acrespy           #+#    #+#             */
/*   Updated: 2023/06/03 09:10:47 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Main.hpp"
# include "Contact.hpp"

class PhoneBook
{
	private:
			Contact		contact[8];
			int			index;

	public:
			PhoneBook();
			~PhoneBook();

			void 		AddContact(void);
			void 		SearchContact(void);
			void 		PrintContact(void);

			void PrintInfo(int info);

			std::string	GetContact(std::string info);
			std::string GetInfo(std::string info);
};


#endif
