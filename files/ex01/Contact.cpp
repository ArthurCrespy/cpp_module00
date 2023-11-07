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

#include "main.h"

Contact::Contact() {}

Contact::~Contact() {}

std::string Contact::GetFirstName()
{
	return (this->FirstName);
}

std::string Contact::GetLastName()
{
	return (this->LastName);
}

std::string Contact::GetFullName()
{
	return (this->FirstName + " " + this->LastName);
}

std::string Contact::GetNickname()
{
	return (this->Nickname);
}

std::string Contact::GetPhoneNumber()
{
	return (this->PhoneNumber);
}

std::string Contact::GetDarkestSecret()
{
	return (this->DarkestSecret);
}

void Contact::SetFirstName(std::string FName)
{
	this->FirstName = FName;
}

void Contact::SetLastName(std::string LName)
{
	this->LastName = LName;
}

void Contact::SetNickname(std::string NName)
{
	this->Nickname = NName;
}

void Contact::SetPhoneNumber(std::string PNumber)
{
	this->PhoneNumber = PNumber;
}

void Contact::SetDarkestSecret(std::string DSecret)
{
	this->DarkestSecret = DSecret;
}
