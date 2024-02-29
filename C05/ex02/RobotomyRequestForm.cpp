/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:31:07 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/23 13:38:04 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : AForm("RobotomyRequestForm", 72, 45)
{
	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << "Robotomy Sistem is beaing desactivated" << std::endl;
}

std::string	RobotomyRequestForm::getTarget(void) const {return (this->_target);}

RobotomyRequestForm RobotomyRequestForm::operator=( RobotomyRequestForm const &other)
{
	this->_target = other.getTarget();
	return (*this);
}

void RobotomyRequestForm::formActivation(void) const
{
	srand(time(0));

	if ((rand() % 2))
		std::cout << "Sucessful activation, " << this->_target << " is becoming a Robot." << std::endl;
	else
		std::cout << "Fail: " << this->_target << " scapad from being Robotomized." << std::endl;
}
