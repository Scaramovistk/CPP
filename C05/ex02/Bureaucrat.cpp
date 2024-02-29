/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:30:03 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/22 14:23:09 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too High, Fortunately this Bureaucrat just exist in a 8D universe");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low, he cannot be considered a Bureaucrat");
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
	std::cout << std::endl << this->_name << " has borned, and is ready to bring terror to your life" << std::endl;
	std::cout << this->_name << " - HAHAHAHAHHAHAHAHAHAHAAHHA (Evil Laugh)" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
	std::cout << this->_name << " is coping " << other.getName() << " strategy take care with him" << std::endl;
	*this = other;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << this->_name << " dont exist anymore, so the world is a little bit better" << std::endl << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const &other)
{
	if (this != &other)
	{
		std::cout << this->_name << " is coping " << other.getName() << " strategy take care with him" << std::endl;
		this->_grade = other.getGrade();
	}
	return (*this);
}

void	Bureaucrat::increntGrade(void)
{
	if ((this->_grade - 1) < 1)
		throw (GradeTooHighException());
	else
	{
		this->_grade--;
		std::cout << this->_name << " - has climbed the hierarchy and now has the grade: " << this->_grade << std::endl;
	}
}

void	Bureaucrat::decrementGrade(void)
{
	if ((this->_grade + 1) > 150)
		throw (GradeTooLowException());
	else
	{
		this->_grade++;
		std::cout << this->_name << " - failed a project and now has the grade: " << this->_grade << std::endl;
	}
}

void	Bureaucrat::signForm( AForm &form )
{
	if (this->_grade > form.getGradeSign())
		std::cout << this->_name << " couldn’t sign " << form.getName()  << " because the grade is too low." << std::endl;
	else if (form.getSig() == true)
		std::cout << this->_name << " couldn’t sign " << form.getName()  << " because its alredy sign." << std::endl;
	else
		form.beSigned(*this);
}

void	Bureaucrat::executeForm(AForm const &form)
{
	if (form.execute(*this))
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	else
		std::cout << this->getName() << " cannot execute " << form.getName() << std::endl;
}

std::string	Bureaucrat::getName(void) const {return (this->_name);}

int	Bureaucrat::getGrade(void) const {return(this->_grade);}

std::ostream&	operator<<(std::ostream &stream, Bureaucrat const &other)
{
	stream << other.getName() << ", bureaucrat grade " << other.getGrade() << ".";
	return (stream);
}
