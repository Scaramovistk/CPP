/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:53:26 by gabriel           #+#    #+#             */
/*   Updated: 2023/02/28 13:42:03 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	this->_funcs[0].name = "DEBUG";
	this->_funcs[0].ft = &Harl::debug;

	this->_funcs[1].name = "INFO";
	this->_funcs[1].ft = &Harl::info;

	this->_funcs[2].name = "WARNING";
	this->_funcs[2].ft = &Harl::warning;

	this->_funcs[3].name = "ERROR";
	this->_funcs[3].ft = &Harl::error;

	std::cout << std::right << " !Hello Human! " << std::endl;
}

Harl::~Harl(void)
{
	std::cout << std::right << " !By Human, soon ill get you job! " << std::endl;
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my"
	<< "7XL-double-cheese-triple-pickle-special-ketchup burger."
	<< "I really do !" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money."
	<< "You didn't put enough bacon in my burger !"
	<< "If you did, I wouldn't be asking for more !" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free."
	<< "I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	int	row;

	row = 0;
	while (row < NBOP)
	{
		if (this->_funcs[row].name == level)
		{
			(this->*_funcs[row].ft)();
			return ;
		}
		row++;
	}
}
