/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 12:27:02 by acrespy           #+#    #+#             */
/*   Updated: 2023/06/03 09:10:47 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

std::string		Contact::GetFirstName(void)
{
	return (this->FirstName);
}

std::string		Contact::GetLastName(void)
{
	return (this->LastName);
}

std::string		Contact::GetFullName(void)
{
	return (this->FirstName + " " + this->LastName);
}

std::string		Contact::GetNickname(void)
{
	return (this->Nickname);
}

std::string		Contact::GetPhoneNumber(void)
{
	return (this->PhoneNumber);
}

std::string		Contact::GetDarkestSecret(void)
{
	return (this->DarkestSecret);
}

void			Contact::SetFirstName(std::string FirstName)
{
	this->FirstName = FirstName;
}

void			Contact::SetLastName(std::string LastName)
{
	this->LastName = LastName;
}

void			Contact::SetNickname(std::string Nickname)
{
	this->Nickname = Nickname;
}

void			Contact::SetPhoneNumber(std::string PhoneNumber)
{
	this->PhoneNumber = PhoneNumber;
}

void			Contact::SetDarkestSecret(std::string DarkestSecret)
{
	this->DarkestSecret = DarkestSecret;
}
