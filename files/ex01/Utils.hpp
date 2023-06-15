/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 12:27:02 by acrespy           #+#    #+#             */
/*   Updated: 2023/06/03 09:10:47 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include "Main.hpp"

class Utils
{
	public:
		static std::string GetInfo(std::string info);
		static void        PrintInfo(int info);
		static std::string TruncateString(const std::string& str, int maxLength);
		static int         AreIdentical(const std::string str1, const std::string str2);
		static std::string XLgoin(std::string FirstName, std::string LastName);
};

#endif