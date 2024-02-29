/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:30:09 by gscarama          #+#    #+#             */
/*   Updated: 2023/06/22 14:50:50 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	Churchill("Churchill", 5);
		Churchill.increntGrade();
		Churchill.increntGrade();
		Churchill.decrementGrade();
		std::cout << Churchill << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat	Churchill("Churchill", 1);
		std::cout << Churchill << std::endl;
		Churchill.increntGrade();
		std::cout << Churchill << std::endl;
		Churchill.increntGrade();
		Churchill.decrementGrade();
		std::cout << Churchill << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat	Macron("Macron", 252);
		std::cout << Macron << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}

	try
	{
		Bureaucrat	XiJinping("Xi Jinping", -2);
		XiJinping.decrementGrade();
		XiJinping.decrementGrade();
		XiJinping.decrementGrade();
		XiJinping.decrementGrade();
		std::cout << XiJinping << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}

	try
	{
		Bureaucrat	XiJinping("Xi Jinping", 150);
		std::cout << XiJinping << std::endl;
		XiJinping.decrementGrade();
		XiJinping.decrementGrade();
		XiJinping.decrementGrade();
		XiJinping.decrementGrade();
		std::cout << XiJinping << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}

	return (0);
}
