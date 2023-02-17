/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:52:53 by gscarama          #+#    #+#             */
/*   Updated: 2023/02/17 15:00:08 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

void		printStd(std::string str);
std::string	fillFilds(std::string str);

class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkstSecret;

	public:
		void		add();
		void		printContact();
		std::string	takeFname();
		std::string	takeLname();
		std::string	takeNick();
};

#endif