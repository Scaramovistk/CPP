/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:41:34 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/29 13:33:25 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void )
{
	
}

ScalarConverter::ScalarConverter(ScalarConverter const& other)
{
	*this = other;
	return ;
}

ScalarConverter::~ScalarConverter( void )
{
	return ;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const &other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

static int	toInt( std::string _value )
{
	int		neg;
	int		len;
	size_t	nb;
	int		i;

	neg = 1;
	nb = 0;
	len = 0;
	i = 0;
	if (_value[0] == '-')
	{
		neg = -1;
		i++;
	}
	if (_value[0] == '+')
		i++;
	while (_value[i] >= '0' && _value[i] <= '9')
	{
		nb = nb + _value[i] - '0';
		if (_value[i + 1] >= '0' && _value[i + 1] <= '9')
			nb *= 10;
		if (len > 19)
			return (0);
		len++;
		i++;
	}
	return ((nb * neg));
}

char	toChar( int i )
{
	return (static_cast<char>(i));
}

static float	toFloat( std::string _value )
{
	return (strtof(_value.c_str(), NULL));
}

static double	toDouble( std::string _value )
{
	return (strtod(_value.c_str(), NULL));
}

const char* ScalarConverter::isNotALiteralExeption::what () const throw()
{
	return ("Incorrect type, it isn't a literal");
}

static bool	isLiteral( std::string _value )
{
	int	row;

	row = 1;
	while (_value[row])
	{
		if ((!isdigit(_value[row]) && _value[row] != '\0')
			&& ((_value[row] != '.' && _value[row] != 'f')
			|| !isdigit(_value[row - 1])))
			return (false);
		row++;
	}
	return (true);
}

void	ScalarConverter::convert( std::string &_value )
{
	char	c;
	int		i;
	float	f;
	double	d;

	if ( _value[0] == '\0' || _value.size() == 0)
		throw(isNotALiteralExeption());
	if(!isdigit(_value[0]) && _value[0] != '-'
		&& _value[0] != '+')
	{
		c = static_cast<char>(_value[0]);
		i = static_cast<int>(_value[0]);
		f = static_cast<float>(_value[0]);
		d = static_cast<double>(_value[0]);
	}
	else
	{
		i = toInt(_value);
		f = toFloat(_value);
		d = toDouble(_value);
		c = toChar(i);
	}

	if (strcmp(&_value[1], "inf") == 0 || strcmp(&_value[1], "inff") == 0)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << _value[0] << "inff" << std::endl;
		std::cout << "double: " << _value[0] << "inf" << std::endl;
	}
	else if (strcmp(&_value[0], "nan") == 0 || strcmp(&_value[0], "nanf") == 0)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (!isLiteral(_value))
	{
		throw(isNotALiteralExeption());
	}
	else
	{
		if (i < 33 || i > 126)
			std::cout << "char: Non displayable" << std::endl;
		else if (f != static_cast<float>(i))
			std::cout << "char: impossible"<< std::endl;
		else
			std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;

		if (d > 2147483647 || d < -2147483648)
			std::cout << "int: impossible"<< std::endl;
		else
			std::cout << "int: " << static_cast<int>(i) << std::endl;

		if (f > std::numeric_limits<float>::max() || f < std::numeric_limits<float>::lowest())
			std::cout << "float: impossible"<< std::endl;
		else if (f == static_cast<float>(i))
			std::cout << "float: " << static_cast<float>(f) << ".0f" << std::endl;
		else
			std::cout << "float: " << static_cast<float>(f) << "f" << std::endl;

		if (d > std::numeric_limits<double>::max() || d < std::numeric_limits<double>::lowest())
			std::cout << "double: impossible"<< std::endl;
		else if (d == static_cast<double>(i))
			std::cout << "double: " << static_cast<double>(d) << ".0" << std::endl;
		else
			std::cout << "double: " << static_cast<double>(d) << std::endl;
	}
}
