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

			void			SetFirstName(std::string FName);
			void			SetLastName(std::string LName);
			void			SetNickname(std::string NName);
			void			SetPhoneNumber(std::string PNumber);
			void			SetDarkestSecret(std::string DSecret);
};

#endif
