/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:30:09 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/23 15:21:35 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	Churchill("Churchill", 1);
		Intern		Julien;
		AForm*		frontDesk;

		try
		{
			frontDesk = Julien.makeForm("shrubbery creation", "Churchill's House");
			Churchill.signForm(*frontDesk);
			Churchill.executeForm(*frontDesk);
			frontDesk = Julien.makeForm("robotomy request", "English Soldier");
			Churchill.signForm(*frontDesk);
			Churchill.executeForm(*frontDesk);
			frontDesk = Julien.makeForm("presidential pardon", "Germans");
			Churchill.signForm(*frontDesk);
			Churchill.executeForm(*frontDesk);
			frontDesk = Julien.makeForm("camaroon for party", "Beaurocrats");
			Churchill.signForm(*frontDesk);
			Churchill.executeForm(*frontDesk);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
