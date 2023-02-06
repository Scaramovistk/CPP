/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:22:08 by gscarama          #+#    #+#             */
/*   Updated: 2023/02/06 15:37:41 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

//Criar clase com todos os dados dos contatos, e flags para saber se estao sendo usados

int	main(void)
{
	std::string	str;
	int			row;
	Contact		phoneBook;
	//Do a string of Contacts
	//Put in function welcome message
	std::cout << "******* Welcome to your new PhoneBook *******\n" 
		<< "To use it enter one of the follwing options:\n" 
		<< "ADD - Will add a new contact\n" 
		<< "SEARCH - Show your contact list\n"
		<< "EXIT - Poweroff your phone (this option will erase your contacts)" << std::endl;
	while (true)
	{
		std::cin >> str;
		if (str == "ADD")
		{
			std::cout << "Enter the follwing data to add your contact" << std::endl;
			std::cout << "First Name:" << std::endl;//A saved contact can’t have empty fields
			std::cin >> phoneBook.first_name;
			std::cout << "Last Name:" << std::endl;
			std::cin >> phoneBook.last_name;
			std::cout << "NickName:" << std::endl;
			std::cin >> phoneBook.nick_name;
			std::cout << "Phone Number:" << std::endl;
			std::cin >> phoneBook.phone_number;
			std::cout << "Your darkest secret:" << std::endl;
			std::cin >> phoneBook.secret;
			
			//contact number == row;
			row++;
			//max 8 contacts, if it excead overrite the oldest one
			std::cout << phoneBook.first_name << phoneBook.last_name << phoneBook.nick_name << phoneBook.phone_number << phoneBook.secret << std::endl;
			//When all fields are complete add contact to phone book
		}
		else if (str == "SEARCH")
		{
			//Display the saved contacts as a list of 4 columns: index, first name, last name and nickname.
			//Must be 10 char wide pipe separete them
		}
		else if (str == "EXIT")
		{
			std::cout << "Exiting processes started\n\n" << std::endl;
			std::cout << "Deleting Files.........\n\n" << std::endl;
			//delay
			std::cout << "Deleting Contacts.........\n\n" << std::endl;
			//Delay
			std::cout << "***** Data cleaned *****\n" << std::endl;
			//Delay
			std::cout << "Goodbye my only friend\n" << std::endl;
			//Delay
			std::cout << "Oh, did you think i meant you?" << std::endl;
			return (0);
		}
		else
			std::cout << "Wrong input try again" << std::endl;
	}
	return (0);
}
