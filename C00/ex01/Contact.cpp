/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:52:56 by gscarama          #+#    #+#             */
/*   Updated: 2023/02/17 14:42:51 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	printStd(std::string str)
{
	std::cout << str << std::endl;
}

std::string	fillFilds(std::string str)
{
	while (str.length() == 0)
	{
		std::cout << "String cannot be empty, please fill it" << std::endl;
		std::getline(std::cin, str);
	}
	return (str);
}

void	Contact::add()
{
	printStd("Enter the follwing data to add your contact");
	printStd("First Name:");
	std::getline(std::cin, this->_firstName);
	this->_firstName = fillFilds(this->_firstName);
	printStd("Last Name:");
	std::getline(std::cin, this->_lastName);
	this->_lastName = fillFilds(this->_lastName);
	printStd("NickName:");
	std::getline(std::cin, this->_nickName);
	this->_nickName = fillFilds(this->_nickName);
	printStd("Phone Number:");
	std::getline(std::cin, this->_phoneNumber);
	this->_phoneNumber = fillFilds(this->_phoneNumber);
	printStd("Your darkest secret:");
	std::getline(std::cin, this->_darkstSecret);
	this->_darkstSecret = fillFilds(_darkstSecret);
}

std::string	Contact::takeFname() {return (_firstName);}
std::string	Contact::takeLname() {return (_lastName);}
std::string	Contact::takeNick() {return (_nickName);}

void	Contact::printContact()
{
	std::cout << this->_firstName << std::endl;
	std::cout << this->_lastName << std::endl;
	std::cout << this->_nickName << std::endl;
	std::cout << this->_phoneNumber << std::endl;
	std::cout << this->_darkstSecret << std::endl;
}
