/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Input.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:44:55 by mgagne            #+#    #+#             */
/*   Updated: 2023/12/21 22:18:17 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_HPP
	#define INPUT_HPP

	#include <string.h>
	#include <iostream>
	// #include <limits>
	#include <iomanip>
	#include <stdlib.h>

	std::string	input_string(std::string field_name);
	std::string	input_nb(std::string field_name);

#endif
