/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:56:51 by gscarama          #+#    #+#             */
/*   Updated: 2023/09/08 14:47:58 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int	main( void )
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	
	std::cout << "Top: " << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << "\nSize: " << mstack.size() << std::endl;

	std::cout << "\nAdding multiple numbers: " << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	for (int row = 0; row < 50; row++)
	{
		srand(time(0));
		mstack.push((rand() % 1000) * row );
	}
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	std::cout << "Top: " << mstack.top() << std::endl;
	std::cout << "\nSize: " << mstack.size() << std::endl;
	std::cout << "\nIterators passing by the whole stack: " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);


//*********  LIST  **********


	std::list<int>	listt;

	listt.push_back(5);
	listt.push_back(17);

	std::cout << "\nSome list tests" << std::endl;
	std::cout << "Top: " << listt.back() << std::endl;
	
	listt.pop_back();
	
	std::cout << "\nSize: " << listt.size() << std::endl;

	std::cout << "\nAdding multiple numbers: " << std::endl;
	listt.push_back(3);
	listt.push_back(5);
	listt.push_back(737);
	for (int row = 0; row < 50; row++)
	{
		srand(time(0));
		listt.push_back((rand() % 1000) * row );
	}
	listt.push_back(0);

	std::list<int>::iterator itl = listt.begin();
	std::list<int>::iterator itel = listt.end();

	++itl;
	--itel;
	std::cout << "Top: " << listt.back() << std::endl;
	std::cout << "\nSize: " << listt.size() << std::endl;
	std::cout << "\nIterators passing by the whole stack: " << std::endl;
	while (itl != itel)
	{
		std::cout << *itl << std::endl;
		++itl;
	}
	std::list<int> z(listt);
	return (0);
}
