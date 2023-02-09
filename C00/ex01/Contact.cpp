/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:52:56 by gscarama          #+#    #+#             */
/*   Updated: 2023/02/09 15:29:56 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	fillFilds(void)
{
	std::string	str;

	while (str.length() == 0)
	{
		std::cout << "String cannot be empty, please fill it" << std::endl; //Choose better message
		std::getline(std::cin, str);
	}
	return (str);
}

void	printStd(std::string str)
{
	std::cout << str << std::endl;
}

void	Contact::addContact(Contact *this)//Pas the correct contact with the modulos aplyed
{
	printStd("Enter the follwing data to add your contact");
	printStd("First Name:");
	this->_firstName = fillFilds();
	printStd("Last Name:");
	this->_lastName = fillFilds();
	printStd("NickName:");
	this->_nickName = fillFilds();
	printStd("Phone Number:");
	this->_phoneNumber = fillFilds();
	printStd("Your darkest secret:");
	this->_DarkestSecret = fillFilds();
}