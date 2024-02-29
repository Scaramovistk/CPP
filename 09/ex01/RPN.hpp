/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:12:40 by gscarama          #+#    #+#             */
/*   Updated: 2023/09/14 14:11:32 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <stdexcept>
#include <stack>
#include <string>
#include <iostream>

class RPN
{
	private:
		std::stack<int>	_nbr;
	public:
		RPN(void);
		RPN(const RPN &other);
		const RPN& operator=(const RPN &other);
		~RPN(void);
		int		Calculate( int n1, int n2, char op);
		void	parceInput(std::string input);
};

#endif