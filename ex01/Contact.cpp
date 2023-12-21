/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:10:37 by mgagne            #+#    #+#             */
/*   Updated: 2023/12/21 22:53:03 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::print(int index)
{
	std::cout << "|"  << std::setw(10) << std::right << index << "|";
	if (first_name.size() > 10)
	{
		first_name[9] = '.';
		std::cout << std::setw(10) << std::right << first_name.substr(0, 10) << "|";
	}
	else
		std::cout << std::setw(10) << std::right << first_name << "|";

	if (last_name.size() > 10)
	{
		last_name[9] = '.';
		std::cout << std::setw(10) << std::right << last_name.substr(0, 10) << "|";
	}
	else
		std::cout << std::setw(10) << std::right << last_name << "|";

	if (nickname.size() > 10)
	{
		nickname[9] = '.';
		std::cout << std::setw(10) << std::right << nickname.substr(0, 10) << "|" << std::endl;
	}
	else
		std::cout << std::setw(10) << std::right << nickname << "|" << std::endl;
	return ;
}

void	Contact::set(void)
{
	first_name = input_string("First Name");
	last_name = input_string("Last Name");
	nickname = input_string("Nickname");
	phone = input_nb("Phone Number");
	secret = input_string("Darkest Secret");
}
