/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:16:19 by gscarama          #+#    #+#             */
/*   Updated: 2023/09/18 14:27:24 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void )
{
	
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const &other )
{
	*this = other;
}

BitcoinExchange::~BitcoinExchange( void )
{
	
}

const BitcoinExchange& BitcoinExchange::operator=( BitcoinExchange const &other )
{
	if (this == &other)
		return(*this);
	this->_database = other._database;
	return(*this);
}

void BitcoinExchange::initDataBase( void )
{
	std::ifstream	file;
	std::string		line;

	file.open("./data.csv");
	if (file.fail())
		exit (Error("Error: data base dont exist."));
	while (!file.eof())
	{
		file >> line;
		std::string fulldate = line.substr(0, 10).erase(4,1).erase(6,1);
		float	rate = 0.0;
		std::stringstream	convert;
		convert << line.substr(11);
		convert >> rate;
		_database.insert(std::make_pair(fulldate, rate));
	}
	file.close();
}

int	BitcoinExchange::Error(std::string str)
{
	std::cerr << str << std::endl;
	return (-1);
}

int	BitcoinExchange::Parsing(int year, int month, int day, std::string raate, float rate, std::string line)
{
	size_t	idx = line.find("|");

	if (line[idx + 1] != ' ' || line[idx - 1] != ' ')
		return (Error("Error: invalid pipe"));
	if(line.substr(4,1) != "-" && line.substr(7,1) != "-")
		return (Error("Error: invalid date format"));
	if ((year < 2009) || (year == 2009 && month == 1 && day < 2))
		return (Error("Error: invalid date"));

	int count = 0;
	for (size_t i = 0; i < raate.length(); i++)
	{
		if (raate[0] == '.')
			return (Error("Error: invalid rate format."));
		if (raate[i] == '.')
			count++;
		if (raate[0] == '-')
			return (Error("Error: not a positive number."));
		if (!(isdigit(raate[i])) && raate[i] != '.' && (count == 1 || count == 0))
			return (Error("Error: invalid rate format."));
	}

	int month_limits[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (year < 2009 || month < 1 || month > 12)
		return (Error("Error: invalid date format"));
	if (day > month_limits[month - 1] || day < 0)
		return (Error("Error: out of month range."));
	if (rate < 0.00)
		return (Error("Error: too small a number."));
	if (rate > 1000.00)
		return (Error("Error: too large a number."));
	return (0);
}

void	BitcoinExchange::ReadInput(std::string filename)
{
	std::string		line;
	std::ifstream	file;

	file.open(filename);
	if(file.fail())
	{
		std::cerr << "Cannot Open File." << std::endl;
		file.close();
		exit(0);
	}
	while (!file.eof())
	{
		std::string	fulldate;
		std::getline(file, line);

		int year, month, day = 0;
		std::stringstream y, m, d;
		y << line.substr(0,4);
		m << line.substr(5,2);
		d << line.substr(8,2);
		y >> year;
		m >> month;
		d >> day;

		if (line == "date | value")
			continue;
		if (line.length() < 14)
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}
		std::string raate = line.substr(13, line.find('\0'));

		float	bitcoins = 0.00;
		std::stringstream	bit;
		std::string::difference_type n = std::count(raate.begin(), raate.end(), '.');
		if (n > 1)
		{
			std::cerr << "Error: bad input => " << raate << std::endl;
			continue;
		}
		bit << raate;
		bit >> bitcoins;
		fulldate = line.substr(0, 10).erase(4,1).erase(6,1);
		if (Parsing(year, month, day, raate, bitcoins, line) == 0)
			PrintOutput(fulldate, bitcoins);
	}
}

void	BitcoinExchange::PrintOutput(std::string indate, float bitcoins)
{
	std::map<std::string, float>::iterator it;
	std::map<std::string, float>::iterator itd;

	it = this->_database.find(indate);
	if (it != this->_database.end())
		std::cout << indate.insert(4, "-").insert(7,"-") << " => " << bitcoins << " = " << std::fixed << std::setprecision(2) << bitcoins * it->second << "\n";
	else
	{
		it = this->_database.lower_bound(indate);
		it--;
		std::cout << indate.insert(4, "-").insert(7,"-") << " => " << bitcoins << " = " << std::fixed << std::setprecision(2) << bitcoins * it->second << "\n";
	}
}
