/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 12:30:53 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/22 14:15:12 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_sig;
		const int			_grdSign;
		const int			_grdExe;
	public:
		AForm(const std::string name, int grdSign, int grdExe);
		AForm(AForm const &other);
		virtual	~AForm( void );
		AForm&		operator=(AForm const &other);
		std::string	getName( void ) const;
		bool		getSig( void ) const;
		int			getGradeSign( void ) const;
		int			getGradeExe( void ) const;
		void		beSigned( Bureaucrat &bureau );
		bool execute(Bureaucrat const & executor) const;
		virtual void	formActivation( void ) const = 0;
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
		class FormNotSigned : public std::exception
		{
			public:
				const char* what( void ) const throw();
		};
};

std::ostream&	operator<<(std::ostream stream, AForm const &other);

#endif
