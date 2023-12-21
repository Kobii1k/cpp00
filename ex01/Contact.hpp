/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:00:59 by mgagne            #+#    #+#             */
/*   Updated: 2023/12/21 22:19:30 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
	#define CONTACT_HPP

	#include "Input.hpp"

	class Contact
	{
		private:
			std::string	first_name;
			std::string	last_name;
			std::string	nickname;
			std::string	phone;
			std::string	secret;
		public:
			void		set(void);
			void		print(int index);
	};
#endif
