/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:53:09 by gscarama          #+#    #+#             */
/*   Updated: 2023/02/09 15:32:55 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::printAllContacts(void)
{
	int	row;

	row = 0;
	while (row < 8)
	{
		std::cout << std::endl << "Index:" << row + 1
		<< " | First Name: " << this[row].first_name 
		<< " | Last Name:" << this[row].last_name 
		<< " | NickName: " << this[row].nick_name << std::endl;
		row++;
	}
}
