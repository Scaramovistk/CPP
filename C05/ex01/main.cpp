/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:30:09 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/21 15:28:27 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	Churchill("Churchill", 1);
		try
		{
			Form	WarPlan("WW2 Plan", 1, 1);
			Churchill.signForm(WarPlan);
			Churchill.signForm(WarPlan);
			std::cout << WarPlan << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << Churchill << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat	Napoleon("Napoleon", 15);
		Napoleon.increntGrade();
		try
		{
			Form	EmperatorsPlan("Coup D'Etat", 1, 1);
			Napoleon.signForm(EmperatorsPlan);
			std::cout << EmperatorsPlan << std::endl; //Sem nenhuma ideia de como resolver ele
		}
		catch(const std::exception& e)
		{
			std::cerr << "He cannot execute the form: "<< e.what() << '\n';
		}
		std::cout << Napoleon << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
