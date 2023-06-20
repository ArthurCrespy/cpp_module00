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

#include "main.h"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
}

PhoneBook::~PhoneBook(void) {}

void		PhoneBook::AddContact()
{
	std::string		str;

	if (index == 8)
	{
		std::cout << "phonebook> Waring: phonebook is full !" << std::endl;
		std::cout << "phonebook> Overwrite: " << contact[0].GetFullName() << " ? [Y/N] ";
		std::getline(std::cin, str);
		if (str == "Y" || str == "y")
		{
			for (int i = 0; i < 7; i++)
                contact[i] = contact[i + 1];
			index--;
			AddInfo(index);
		}
		else
			return ;
	}
	else
		AddInfo(index);
	index++;
}

void        PhoneBook::AddInfo(int index)
{
	std::string		str;

	std::cout << "phonebook> Adding new contact:" << std::endl;
	contact[index].SetFirstName(GetInfo("First name"));
	contact[index].SetLastName(GetInfo("Last name"));
	std::cout << "           Use " << XLgoin(contact[index].GetFirstName(), contact[index].GetLastName()) << " for nickname ? [Y/N] ";
	std::getline(std::cin, str);
	if (str == "Y" || str == "y")
		contact[index].SetNickname(XLgoin(contact[index].GetFirstName(), contact[index].GetLastName()));
	else
		contact[index].SetNickname(GetInfo("Nickname"));
	contact[index].SetPhoneNumber(GetInfo("Phone number"));
	contact[index].SetDarkestSecret(GetInfo("Darkest secret"));

}

void		PhoneBook::SearchContact(void)
{
	int				i;
	int				found;
	std::string		info;

	i = 0;
	found = 0;
	std::cout << "phonebook> Searching for contact:" << std::endl;
	info = GetInfo("Search");
	std::cout << "           |¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|" << std::endl;
	std::cout << "           |   Index  | FirstName| LastName | Nickname |" << std::endl;
	std::cout << "           |-------------------------------------------|" << std::endl;
	while (i != 8)
	{
		if (AreIdentical(PhoneBook::contact[i].GetFirstName(), info)
		    || AreIdentical(PhoneBook::contact[i].GetLastName(), info)
		    || AreIdentical(PhoneBook::contact[i].GetFullName(), info)
		    || AreIdentical(PhoneBook::contact[i].GetNickname(), info))
		{
			PrintInfo(i);
			found++;
		}
		i++;
	}
	if (found == 0)
	{
		std::cout << "           |                 No Match                  |" << std::endl;
		std::cout << "           |___________________________________________|" << std::endl;
		return ;
	}
	else
	{
		std::cout << "           |___________________________________________|" << std::endl;
		std::cout << "           Select contact: ";
		std::getline(std::cin, info);
		if (info.length() == 1 && info[0] >= '0' && info[0] <= '7')
			PhoneBook::PrintContact(info[0] - '0');
		else
			std::cout << "phonebook> Error: Invalid index" << std::endl;
	}
}

void		PhoneBook::PrintContact(int index)
{
	if (index < 0 || index > 7 || contact[index].GetFirstName() == "")
	{
		std::cout << "phonebook> Error: Invalid index !" << std::endl;
		return ;
	}

	std::cout << "phonebook> Printing contact:" << std::endl;
	std::cout << "           First name: " << contact[index].GetFirstName() << std::endl;
	std::cout << "           Last name: " << contact[index].GetLastName() << std::endl;
	std::cout << "           Nickname: " << contact[index].GetNickname() << std::endl;
	std::cout << "           Phone number: " << contact[index].GetPhoneNumber() << std::endl;
	std::cout << "           Darkest secret: " << contact[index].GetDarkestSecret() << std::endl;
}

void        PhoneBook::PrintInfo(int index)
{
    std::cout << "           |" << std::setw(10) << index << "|";
    std::cout << std::setw(10) << std::right << TruncateString(contact[index].GetFirstName(), 9) << "|";
    std::cout << std::setw(10) << std::right << TruncateString(contact[index].GetLastName(), 9) << "|";
    std::cout << std::setw(10) << std::right << TruncateString(contact[index].GetNickname(), 9) << "|" << std::endl;
}
