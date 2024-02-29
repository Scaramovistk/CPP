/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:31:00 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/23 15:21:47 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Creating the Inter" << std::endl;
	this->_forms[0].name = "shrubbery creation";
	this->_forms[0].fm = &Intern::_shrubbery;
	this->_forms[1].name = "robotomy request";
	this->_forms[1].fm = &Intern::_robotomy;
	this->_forms[2].name = "presidential pardon";
	this->_forms[2].fm = &Intern::_pardon;
}

Intern::Intern(Intern const &other)
{
	std::cout << "Coping the Intern" << std::endl;
	*this = other;
}

Intern::~Intern(void)
{
	std::cout << "Destroing the Intern" << std::endl;
}

Intern& Intern::operator=(Intern const &other)
{
	if (this != &other)
		*this = other;
	std::cout << "Doing a Xerox of the Intern" << std::endl;
	return (*this);
}

AForm* Intern::makeForm(std::string form, std::string target)
{
	int	row;

	row = 0;
	if (target.empty() || form.empty())
		throw(TargetEmpty());
	while (row <= 3)
	{
		if (this->_forms[row].name == form)
		{
			std::cout << "Is creating the form: " << this->_forms[row].name << std::endl;
			return((this->*_forms[row].fm)(target));
		}
		row++;
	}
	throw(InexistentForm());
}

const char* Intern::TargetEmpty::what() const throw()
{
	return ("The target is empty");
}

const char* Intern::InexistentForm::what() const throw()
{
	return ("The Form that you have chosed for dont exist");
}

AForm* Intern::_shrubbery (std::string target)
{
	AForm *shruberry;

	shruberry = new ShrubberyCreationForm(target);
	return(shruberry);
}

AForm* Intern::_robotomy (std::string target)
{
	AForm *robotomy;

	robotomy = new RobotomyRequestForm(target);
	return (robotomy);
}

AForm* Intern::_pardon (std::string target)
{
	AForm *pardon;

	pardon = new PresidentialPardonForm(target);
	return (pardon);
}
