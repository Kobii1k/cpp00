/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:11:56 by mgagne            #+#    #+#             */
/*   Updated: 2023/12/21 22:02:10 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
	#define PHONEBOOK_HPP

	#include "Contact.hpp"

	class PhoneBook
	{
		private:
			Contact	c_list[8];
		public:
			void	add(int *size);
			void	search(int size);
	};
#endif
