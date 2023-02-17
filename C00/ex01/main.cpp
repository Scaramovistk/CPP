/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:22:08 by gscarama          #+#    #+#             */
/*   Updated: 2023/02/17 15:27:49 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	receptionist(int op)
{
	if (op == 0)
	{
		printStd("******* Welcome to your new PhoneBook *******");
		printStd("To use it enter one of the follwing options:");
		printStd("ADD - Will add a new contact");
		printStd("SEARCH - Show your contact list");
		printStd("EXIT - Poweroff your phone (this option will erase your contacts)");
	}
	else if (op == 1)
	{
		printStd("Exiting processes started");
		printStd("Deleting Files.........");
		printStd("Deleting Contacts.........");
		printStd("***** Data cleaned *****");
		printStd("Goodbye my only friend");
		printStd("Oh, did you think i meant you?");
		exit(0);
	}
}

int	main(void)
{
	std::string	str;
	int			row;
	PhoneBook	phoneBook;

	row = 0;
	receptionist(0);
	while (true)
	{
		std::getline(std::cin, str);
		if (str == "ADD")
		{
			phoneBook.addContact(row);
			row++;
		}
		else if (str == "SEARCH")
		{
			phoneBook.searchContact();
			showContact(phoneBook, row);
		}
		else if (str == "EXIT")
			receptionist(1);
		else
			printStd("Wrong input try again");
		std::cout << "Type a command (ADD, SEARCH or EXIT):" << std::endl;
	}
	return (0);
}
