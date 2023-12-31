/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:39:21 by mgagne            #+#    #+#             */
/*   Updated: 2023/12/21 22:03:14 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	std::string		in;
	PhoneBook		phonebook;
	int				size;

	size = 0;
	std::cout << "WELCOME TO YOUR PHONEBOOK" << std::endl;
	while (1)
	{
		std::cout << "commands : ADD | SEARCH | EXIT" << std::endl;
		in = input_string("");
		if (in.compare("ADD") == 0)
			phonebook.add(&size);
		else if (in.compare("SEARCH") == 0)
			phonebook.search(size);
		else if (in.compare("EXIT") == 0)
			return (0);
	}
	return (0);
}
