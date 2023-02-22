/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 16:05:26 by gscarama          #+#    #+#             */
/*   Updated: 2023/02/22 15:26:52 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <iomanip>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	Account::_displayTimestamp();
	this->_accountIndex = this->_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_nbAccounts++;
	this->_totalAmount += initial_deposit;
	std::cout << "index:"<< this->_accountIndex << ";amount:"
	<< this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
	<< this->_amount << ";closed" << std::endl;
}

int	Account::getNbAccounts( void ) {return (Account::_nbAccounts);}

int	Account::getTotalAmount( void ){return (Account::_totalAmount);}

int	Account::getNbDeposits( void ){return (Account::_totalNbDeposits);}

int	Account::getNbWithdrawals( void ){return (Account::_totalNbWithdrawals);}

int		Account::checkAmount(void) const {return(this->_amount);}

void	Account::_displayTimestamp(void)
{
	time_t	now;
	tm		*date;

	now = time(0); // Search about the time
	date = localtime(&now);
	std::cout << "[";
	std::cout << 1900 + date->tm_year;
	std::cout << std::setfill('0') << std::setw(2) << date->tm_mon + 1; //Search about the funcions
	std::cout << std::setfill('0') << std::setw(2) << date->tm_mday;
	std::cout << "_";
	std::cout << std::setfill('0') << std::setw(2) << date->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << date->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << date->tm_sec;
	std::cout << "]";
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts
	<< ";total:" << Account::_totalAmount
	<< ";deposits:" << Account::_totalNbDeposits
	<< ";withdrawls:" << Account::_totalNbWithdrawals << std::endl;
	return ;
}

void	Account::makeDeposit(int deposit)
{
	this->_nbDeposits++;
	_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";p_amount:" << this->_amount
	<< ";deposit:" << deposit
	<< ";amount:" << this->_amount + deposit
	<< ";nb_deposits:" << this->_nbDeposits << std::endl;
	this->_amount += deposit;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";p_amount:" << this->_amount;
	if (withdrawal < this->_amount)
	{
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << ";withdrawal:" << this->_totalNbWithdrawals
		<< ";amount:" << this->_amount - withdrawal
		<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		this->_amount -= withdrawal;
		return (true);
	}
	std:: cout << ";withdrawal:refused" << std::endl;
	return (false);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
