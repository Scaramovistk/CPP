/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:53:09 by gscarama          #+#    #+#             */
/*   Updated: 2023/02/17 15:26:19 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	formatName(std::string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0, 10);
		str[9] = '.';
	}
	return (str);
}

Contact	PhoneBook::takeConcact(int	index){return (this->_contacts[index % 8]);}

void	showContact(PhoneBook phoneBook, int index)
{
	int			row;
	Contact		contact;
	std::string	nbr;

	index = index % 8;
	while (index > 0)
	{
		std::cout << "Type the Index to show your Contact full information" << std::endl;
		std::getline(std::cin, nbr);
		row = atoi(nbr.c_str()) - 1;
		if (row >= 0 && row <=7 && row)
		{
			contact = phoneBook.takeConcact(row);
			contact.printContact();
			break;
		}
		else
			std::cout << "Wrong Number! Try again" << std::endl;
	}
	if (index == 0)
		std::cout << "You have no contacts, please add it first" << std::endl;
}

void	PhoneBook::searchContact()
{
	Contact		contact;
	std::string	nbr;
	int			row;

	row = 0;
	std::cout << "Contact List:" << std::endl;
	std::cout << std::right << "|";
	std::cout.width(10); std::cout << std::right << "Index";
	std::cout << std::right << "|";
	std::cout.width(10); std::cout << std::right << "First Name";
	std::cout << std::right << "|";
	std::cout.width(10); std::cout << std::right << "Last Name";
	std::cout << std::right << "|";
	std::cout.width(10); std::cout << std::right << "Nickname";
	std::cout << std::right << "|\n";
	std::cout << std::right << "---------------------------------------------\n";
	while (row < 8){
		contact = this->_contacts[row];
		std::cout << std::right << "|";
		std::cout.width(10); std::cout << std::right << row + 1;
		std::cout << std::right << "|";
		std::cout.width(10); std::cout << std::right << formatName(contact.takeFname());
		std::cout << std::right << "|";
		std::cout.width(10); std::cout << std::right << formatName(contact.takeLname());
		std::cout << std::right << "|";
		std::cout.width(10); std::cout << std::right << formatName(contact.takeNick());
		std::cout << std::right << "|\n";
		row++;
	}
}

void	PhoneBook::addContact(int	index)
{
	this->_contacts[index % 8].add();
	std::cout << "\nYour contact has been added\n" << std::endl;
	printStd("ADD - Will add a new contact");
	printStd("SEARCH - Show your contact list");
	printStd("EXIT - Poweroff your phone (this option will erase your contacts)");
}
