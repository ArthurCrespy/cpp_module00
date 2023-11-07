/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 12:27:02 by acrespy           #+#    #+#             */
/*   Updated: 2023/06/03 09:10:47 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int AreIdentical(const std::string str1, const std::string str2)
{
	if (str1.length() != str2.length())
		return (0);
	for (size_t i = 0; i < str1.length(); ++i) {
		if (std::tolower(str1[i]) != std::tolower(str2[i]))
			return (0);
	}
	return (1);
}

std::string GetInfo(std::string info)
{
	std::string str;

	while (str.empty())
	{
		std::cout << "           " << info << " : ";
		std::getline(std::cin, str);
	}
	return (str);
}

std::string TruncateString(const std::string str, unsigned long maxLength)
{
    if (str.length() <= maxLength)
        return (str);
    else
        return (str.substr(0, maxLength - 1) + ".");
}

std::string	XLgoin(std::string FirstName, std::string LastName)
{
	int 		i;
	int 		j;
	std::string XLogin;

	i = 0;
	j = 0;
	XLogin += FirstName[0];
    while (LastName[j] && i < 7)
    {
        XLogin += LastName[j];
        i++;
        j++;
    }
	i = 0;
	while (i < (int)XLogin.length())
	{
		XLogin[i] = std::tolower(XLogin[i]);
		i++;
	}
	return (XLogin);
}
