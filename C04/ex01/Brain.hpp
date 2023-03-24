/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:41:13 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/21 12:41:05 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public:
		Brain( void );
		Brain( Brain const &other );
		~Brain( void );
		Brain& operator=(Brain const &other);
		std::string getIdea( int const &pos ) const;
		void setIdea ( int const &pos, std::string &idea);
	private:
		std::string _ideas[100];
};

std::ostream& operator<<(std::ostream &stream, Brain const &other);

#endif