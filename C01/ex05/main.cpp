/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:53:23 by gabriel           #+#    #+#             */
/*   Updated: 2023/02/28 13:39:55 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	robot;

	robot.complain("DEBUG");

	robot.complain("INFO");

	robot.complain("WARNING");

	robot.complain("ERROR");

	return (0);
}