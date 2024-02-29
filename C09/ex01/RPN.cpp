/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:12:38 by gscarama          #+#    #+#             */
/*   Updated: 2023/09/18 15:55:21 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void)
{
	
}

RPN::RPN(const RPN &other)
{
	*this = other;
}

const RPN& RPN::operator=(const RPN &other)
{
	(void) other;
	return (*this);
}

RPN::~RPN(void)
{
	
}

int RPN::Calculate( int n1, int n2, char op)
{
	switch (op)
	{
		case '+':
			return (n1 + n2);
		case '-':
			return (n2 - n1);
		case '*':
			return (n1 * n2);
		case '/':
		{
			if (n1 == 0)
				throw std::invalid_argument("Execption Dividind by Zero");
			return (n2 / n1);
		}
	}
	return (0);
}

void	RPN::parceInput(std::string input)
{
	std::string	op = "+/*-";
	size_t ops, num;
	ops = num = 0;
	for(size_t row = 0; row < input.length(); row++)
	{
		if (isdigit(input[row]))
		{
			num++;
			this->_nbr.push(input[row] - '0');
		}
		else if (op.find(input[row]) != std::string::npos && _nbr.size() > 1)
		{
			ops++;
			int n1 = this->_nbr.top();
			this->_nbr.pop();
			this->_nbr.top() = Calculate(n1, _nbr.top(), input[row]);
		}
		else if (isspace(input[row]))
			continue ;
		else
			throw std::invalid_argument("Error");
	}
	if ((ops + 1) != num)
		throw std::invalid_argument("Wrong Amount Of Operatos");
	std::cout << this->_nbr.top() << std::endl;
}
