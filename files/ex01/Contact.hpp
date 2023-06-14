/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 12:27:02 by acrespy           #+#    #+#             */
/*   Updated: 2023/06/03 09:10:47 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "Main.hpp"

class Contact
{
	private:
			std::string		FirstName;
			std::string		LastName;
			std::string		Nickname;
			std::string		PhoneNumber;
			std::string		DarkestSecret;

	public:
			Contact();
			~Contact();

			std::string		GetFirstName();
			std::string		GetLastName();
			std::string		GetFullName();
			std::string		GetNickname();
			std::string		GetPhoneNumber();
			std::string		GetDarkestSecret();
			void			SetFirstName(std::string FirstName);
			void			SetLastName(std::string LastName);
			void			SetNickname(std::string Nickname);
			void			SetPhoneNumber(std::string PhoneNumber);
			void			SetDarkestSecret(std::string DarkestSecret);

			std::string		XLgoin(std::string FirstName, std::string LastName);
};

#endif
