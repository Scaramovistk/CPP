/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:41:04 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/21 12:41:27 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain ( void )
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain ( Brain const &other)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = other;
}

Brain::~Brain ( void )
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain& Brain::operator=(Brain const &other)
{
	int	row;

	row = 0;
	if (this != &other)
	{
		while (row <= 100)
		{
			this->_ideas[row] = other.getIdea(row);
			row++;
		}
	}
	return (*this);
}

std::string Brain::getIdea(int const &pos) const { return (this->_ideas[pos]); }

void	Brain::setIdea ( int const &pos, std::string &idea) { this->_ideas[pos] = idea; }

std::ostream& operator<<(std::ostream &stream, Brain const &other)
{
	int	row;

	row = 0;
	while (row <= 100)
	{
		stream << other.getIdea(row) << std::endl;
		row++;
	}
	return (stream);
}