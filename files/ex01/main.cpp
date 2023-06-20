/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 12:27:02 by acrespy           #+#    #+#             */
/*   Updated: 2023/06/03 09:10:47 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main(void)
{
	PhoneBook 	phonebook;
	std::string	command;

	while (command != "EXIT")
	{
		std::cout << "phonebook> ";
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.AddContact();
		else if (command == "SEARCH")
			phonebook.SearchContact();
		else if (command == "EXIT")
			break ;
		if (std::cin.eof())
		{
			std::cout << std::endl;
			break ;
		}
	}
	return (0);
}
