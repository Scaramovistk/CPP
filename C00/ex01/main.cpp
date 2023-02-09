/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:22:08 by gscarama          #+#    #+#             */
/*   Updated: 2023/02/09 15:19:12 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

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
			// ft_add_contact(&row, phoneBook);
			// ft_print_booklist(phoneBook);
			//When all fields are complete add contact to phone book
		}
		else if (str == "SEARCH")
		{
			//Display the saved contacts as a list of 4 columns: index, first name, last name and nickname.
			//Must be 10 char wide pipe separete them
		}
		else if (str == "EXIT")
			receptionist(1);
		else
			printStd("Wrong input try again");
	}
	return (0);
}