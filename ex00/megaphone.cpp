/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:16:44 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/15 12:00:01 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int	main(int argc, char **argv)
{
	int		i;
	size_t	len;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			len = strlen(argv[i]);
			for (size_t j = 0; j < len; j++)
			{
				std::cout << (char)std::toupper(argv[i][j]);
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
