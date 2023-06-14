/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 12:27:02 by acrespy           #+#    #+#             */
/*   Updated: 2023/06/03 09:10:47 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void		PhoneBook::AddContact()
{
	std::string		str;

	if (this->index == 8)
	{
		std::cout << "phonebook> Waring: phonebook is full !" << std::endl;
		std::cout << "phonebook> Overwrite: " << PhoneBook::contact[0].GetFullName() << " ? [Y/N]" << std::endl;
		std::getline(std::cin, str);
		if (str == "Y")
			this->index = 0;
		else
			return ;
	}

	PhoneBook::contact[this->index].SetFirstName(this->GetInfo("First name"));
	PhoneBook::contact[this->index].SetLastName(this->GetInfo("Last name"));
	std::cout << "phonebook> Use " << PhoneBook::contact[this->index].XLgoin(PhoneBook::contact[this->index].GetFirstName(),
																			 PhoneBook::contact[this->index].GetLastName()) << " for nickname ? [Y/N] ";
	std::getline(std::cin, str);
	if (str == "Y")
		PhoneBook::contact[this->index].SetNickname(PhoneBook::contact[this->index].GetFirstName());
	else
		PhoneBook::contact[this->index].SetNickname(this->GetInfo("Nickname"));
	PhoneBook::contact[this->index].SetPhoneNumber(this->GetInfo("Phone number"));
	PhoneBook::contact[this->index].SetDarkestSecret(this->GetInfo("Darkest secret"));
	this->index++;
}

void PhoneBook::PrintInfo(int info)
{
	static int i = 0;

	std::cout << "|     " << i << "    |";
	std::cout << "|" << contact[info].GetFirstName();
	std::cout << "|" << contact[info].GetLastName();
	std::cout << "|" << contact[info].GetNickname() << std::endl;

}

void		PhoneBook::SearchContact(void)
{
	int				i;
	int				found;
	std::string		info;

	i = 0;
	found = 0;
	info = PhoneBook::GetInfo("Search");
	std::cout << "|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|" << std::endl;
	std::cout << "|  Index  | FirstName | LastName | Nickname |" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	while (i != 8)
	{
		if (PhoneBook::contact[i].GetFirstName() == info
			|| PhoneBook::contact[i].GetLastName() == info
			|| PhoneBook::contact[i].GetFullName() == info
			|| PhoneBook::contact[i].GetNickname() == info)
		{
			PhoneBook::PrintInfo(i);
			found++;
		}
		i++;
	}
	if (found == 0)
	{
		std::cout << "|                 No Match                  |" << std::endl;
		std::cout << "|___________________________________________|" << std::endl;
	}


}

std::string PhoneBook::GetInfo(std::string info)
{
	std::string		str;

	while (str.empty())
	{
		std::cout << "phonebook> " << info << " : ";
		std::getline(std::cin, str);
	}
	return (str);
}