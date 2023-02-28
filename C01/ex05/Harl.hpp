/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:53:21 by gabriel           #+#    #+#             */
/*   Updated: 2023/02/28 13:29:48 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>
#define NBOP 4

class	Harl
{
	typedef struct s_func
	{
		std::string	name;
		void		(Harl::*ft)(void);
	} t_func;

	public:
		Harl( void );
		~Harl( void );
		void	complain( std::string level);

	private:
		t_func	_funcs[NBOP];
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif
