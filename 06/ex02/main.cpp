/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:11:29 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/28 16:27:27 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main ( void )
{
	Base* obj = generate();

	std::cout << "By pointer:" << std::endl;
	identify(obj);

	Base& refObj = *obj;

	std::cout << "By referance:" << std::endl;
	identify(refObj);
	return (0);
}