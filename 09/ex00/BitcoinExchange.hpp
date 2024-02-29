/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:16:16 by gscarama          #+#    #+#             */
/*   Updated: 2023/09/15 11:54:02 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

class BitcoinExchange
{
	private:
		std::map<std::string, float>	_database;
	public:
		BitcoinExchange( void );
		BitcoinExchange( BitcoinExchange const &other );
		~BitcoinExchange( void );
		const BitcoinExchange& operator=( BitcoinExchange const &other );
		void	initDataBase( void );
		int		Parsing(int year, int month, int day, std::string raate, float rate, std::string line);
		void	ReadInput(std::string filename);
		void	PrintOutput(std::string indate, float bitcoins);
		int		Error(std::string str);
};

#endif
