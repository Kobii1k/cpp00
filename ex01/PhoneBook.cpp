/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:14:32 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/14 19:52:41 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::add(int *size)
{
	static int	index = 0;

	if (index == 8)
		index = 0;
	c_list[index].set();
	index++;
	(*size)++;
	std::cout << "Added contact at index n°" << index << "\n" << std::endl;
}

void	PhoneBook::search(int size)
{
	std::string		in;
	int				index;

	for (int i = 1; i <= 8; i++)
	{
		if (i <= size)
			c_list[i - 1].print(i);
	}
	in = inputNb("contact index n°");
	index = std::atoi(in.c_str());
	if (!(index >= 1 && index <= 8))
	{
		std::cout << index << " is not valid index" << std::endl;
		return ;
	}
	if (index <= size)
		c_list[index - 1].print(index);
	else
		std::cout << "this contact doesn't exist" << std::endl;
	return ;
}
