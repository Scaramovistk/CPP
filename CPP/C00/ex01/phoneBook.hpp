/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:34:00 by gscarama          #+#    #+#             */
/*   Updated: 2023/02/06 15:38:02 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
//The file need to have the class name

class Contact
{
	public:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		long		phone_number;
		std::string	secret;

	//public:
		// pointer to another class ?
};

#endif