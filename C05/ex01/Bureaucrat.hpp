/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:30:06 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/21 15:25:28 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int			_grade;

	public:
		Bureaucrat	(std::string name, int grade);
		Bureaucrat	(Bureaucrat const &other);
		~Bureaucrat	( void );
		Bureaucrat&	operator=(Bureaucrat const &other);
		std::string	getName(void) const;
		int			getGrade(void) const;
		void		increntGrade(void);
		void		decrementGrade( void );
		void		signForm( Form &form );
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what(void) const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what(void) const throw();
		};
};

std::ostream&	operator<<(std::ostream &stream, Bureaucrat const &other);

#endif
