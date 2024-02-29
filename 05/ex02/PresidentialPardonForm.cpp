/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:31:28 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/22 14:03:00 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : AForm("PresidentialPardonForm", 25, 5)
{
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Zaphod Beeblebrox is tired so hes going home" << std::endl;
}

std::string	PresidentialPardonForm::getTarget(void) const {return (this->_target);}

PresidentialPardonForm PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	this->_target = other.getTarget();
	return (*this);
}

void	PresidentialPardonForm::formActivation(void) const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
