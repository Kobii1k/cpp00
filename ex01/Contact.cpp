/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:10:37 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/17 15:07:37 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::print(int index)
{
	std::cout << "|"  << std::setw(10) << std::right << index << "|";
	if (firstName.size() > 10)
	{
		firstName[9] = '.';
		std::cout << std::setw(10) << std::right << firstName.substr(0, 10) << "|";
	}
	else
		std::cout << std::setw(10) << std::right << firstName << "|";

	if (lastName.size() > 10)
	{
		lastName[9] = '.';
		std::cout << std::setw(10) << std::right << lastName.substr(0, 10) << "|";
	}
	else
		std::cout << std::setw(10) << std::right << lastName << "|";

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
	firstName = inputString("First Name");
	lastName = inputString("Last Name");
	nickname = inputString("Nickname");
	phone = inputNb("Phone Number");
	secret = inputString("Darkest Secret");
}
