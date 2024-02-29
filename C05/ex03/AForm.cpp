/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 12:30:55 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/21 15:31:57 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string name, int grdSign, int grdExe)
	: _name(name), _grdSign(grdSign), _grdExe(grdExe) 
{
	if (grdSign < 1 || grdExe < 1)
		throw (GradeTooHighException());
	else if (grdSign > 150 || grdExe > 150)
		throw (GradeTooLowException());
	_sig = false;
}

AForm::AForm(AForm const &other) : _grdSign(other.getGradeSign()), _grdExe(other.getGradeExe())
{
	*this = other;
}

AForm::~AForm( void )
{
	std::cout << "`Papermachine Noise`: The form " << _name << " dont exitst anymore" << std::endl;
}

AForm&	AForm::operator=(AForm const &other)
{
	this->_sig = other.getSig();
	return (*this);
}

int	AForm::getGradeExe( void ) const {return (this->_grdExe);}

void	AForm::beSigned( Bureaucrat &bureau )
{
	if (bureau.getGrade() > this->_grdSign)
		throw (GradeTooLowException());
	this->_sig = true;
	std::cout << bureau.getName() << " has signed " << this->_name << std::endl;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade Too High");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return("Grade Too Low");
}

const char* AForm::FormNotSigned::what() const throw()
{
	return("The Form Was Not Signed");
}

bool	AForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->_grdExe)
		throw(GradeTooLowException());
	else if (this->_sig != true)
		throw(FormNotSigned());
	else
	{
		formActivation();
		return (true);
	}
	return (false);
}

bool	AForm::getSig( void ) const {return (this->_sig);}

int	AForm::getGradeSign( void ) const {return (this->_grdSign);}

std::string	AForm::getName( void ) const {return (this->_name);}

std::ostream&	operator<<(std::ostream &stream, AForm const &other)
{
	stream << "The Form: " << other.getName() << " has the status: " << other.getSig()
		<< " the Grade required to sign it is: " << other.getGradeSign()
		<< " and to execute is: " << other.getGradeExe();
	return (stream);
}
