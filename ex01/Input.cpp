/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:44:57 by mgagne            #+#    #+#             */
/*   Updated: 2023/12/21 22:23:40 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Input.hpp"

static int	ft_isdigit(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

std::string	input_string(std::string field_name)
{
	std::string		str;

	while (str.empty())
	{
		if (field_name.empty())
			std::cout << "=> ";
		else
			std::cout << field_name << " : ";
		std::getline(std::cin, str);
		if (str.empty())
		{
			std::cin.clear();
			if (field_name.empty())
				std::cout << "commands : ADD | SEARCH | EXIT" << std::endl;
			else
				std::cout << field_name << " can't be empty" << std::endl;
		}
		else if (std::cin.eof())
			exit(0);
	}
	return (str);
}

std::string	input_nb(std::string field_name)
{
	std::string		str;

	while (str.empty() || !ft_isdigit(str))
	{
		std::cout << field_name << " : ";
		std::getline(std::cin, str);
		if (str.empty() || !ft_isdigit(str))
		{
			std::cin.clear();
			if (str.empty())
				std::cout << field_name << " can't be empty" << std::endl;
			else
				std::cout << "You must enter a valid number" << std::endl;
		}
		else if (std::cin.eof())
			exit(0);
	}
	return (str);
}
