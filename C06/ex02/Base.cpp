/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:52:22 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/28 16:23:36 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base( void )
{
	std::cout << "Base Destructor" << std::endl;
}

Base * generate(void)
{
	int	nb;
	Base	*obj;
	srand(time(0));

	nb = (rand() % 3);
	if (nb == 0)
		obj = new(A);
	else if (nb == 1)
		obj = new(B);
	else
		obj = new(C);
	return (obj);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "This class is not supported" << std::endl;
		
}

void identify(Base& p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
	else
		std::cout << "This class is not supported" << std::endl;
}
