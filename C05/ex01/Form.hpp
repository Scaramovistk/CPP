/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 12:30:53 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/23 13:25:43 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_sig;
		const int			_grdSign;
		const int			_grdExe;
	public:
		Form(const std::string name, int grdSign, int grdExe);
		Form(Form const &other);
		~Form( void );
		Form&		operator=(Form const &other);
		std::string	getName( void ) const;
		bool		getSig( void ) const;
		int			getGradeSign( void ) const;
		int			getGradeExe( void ) const;
		void		beSigned( Bureaucrat &bureau );

		class GradeTooHighException : public std::exception
		{
			public:
				const char*	what( void ) const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char*	what( void ) const throw();
		};
};

std::ostream&	operator<<(std::ostream &stream, Form const &other);

#endif
