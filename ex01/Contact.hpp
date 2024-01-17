/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:00:59 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/17 15:07:37 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
	#define CONTACT_HPP

	#include "Input.hpp"

	class Contact
	{
		private:
			std::string	firstName;
			std::string	lastName;
			std::string	nickname;
			std::string	phone;
			std::string	secret;
		public:
			void		set(void);
			void		print(int index);
	};
#endif
