/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 12:30:55 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/23 13:29:34 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(const std::string name, int grdSign, int grdExe)
	: _name(name), _grdSign(grdSign), _grdExe(grdExe) 
{
	if (grdSign < 1 || grdExe < 1)
		throw (GradeTooHighException());
	else if (grdSign > 150 || grdExe > 150)
		throw (GradeTooLowException());
	_sig = false;
}

Form::Form(Form const &other) : _grdSign(other.getGradeSign()), _grdExe(other.getGradeExe())
{
	*this = other;
}

Form::~Form( void )
{
	std::cout << "`Papermachine Noise`: The form " << _name << " dont exitst anymore" << std::endl;
}

Form&	Form::operator=(Form const &other)
{
	if (this != &other)
		this->_sig = other.getSig();
	return (*this);
}

void	Form::beSigned( Bureaucrat &bureau )
{
	if (bureau.getGrade() > this->_grdSign)
		throw (GradeTooLowException());
	this->_sig = true;
	std::cout << bureau.getName() << " has signed " << this->_name << std::endl;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return("Grade Too Low");
}

int	Form::getGradeExe( void ) const {return (this->_grdExe);}

bool	Form::getSig( void ) const {return (this->_sig);}

int	Form::getGradeSign( void ) const {return (this->_grdSign);}

std::string	Form::getName( void ) const {return (this->_name);}

std::ostream&	operator<<(std::ostream &stream, Form const &other)
{
	stream << "The Form: " << other.getName() << " has the status: " << other.getSig()
		<< " the Grade required to sign it is: " << other.getGradeSign()
		<< " and to execute is: " << other.getGradeExe();
	return (stream);
}