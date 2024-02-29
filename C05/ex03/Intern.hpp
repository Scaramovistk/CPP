/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:30:48 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/22 15:53:50 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	typedef struct s_forms
	{
		std::string	name;
		AForm*	(Intern::*fm)(std::string target);
	} t_forms;
	private:
		t_forms _forms[3];
		AForm* _shrubbery (std::string target);
		AForm* _robotomy (std::string target);
		AForm* _pardon (std::string target);
	public:
		Intern(void);
		Intern(Intern const &other);
		~Intern(void);
		Intern& operator=(Intern const &other);
		AForm* makeForm(std::string form, std::string target);
		
		class TargetEmpty : public std::exception
		{
			public:
				const char* what(void) const throw();
		};
		class InexistentForm : public std::exception
		{
			public:
				const char* what(void) const throw();
		};
};