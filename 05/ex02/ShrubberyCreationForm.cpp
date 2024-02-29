/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:30:18 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/23 13:36:05 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = "Root";
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &other ) : AForm("ShrubberyCreationForm", 145, 137)
{
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << "The form proposition has been expirated" << std::endl;
}

std::string ShrubberyCreationForm::getTarget( void ) const {return (this->_target);}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm const &other )
{
	this->_target = other.getTarget();
	return (*this);
}

void	ShrubberyCreationForm::formActivation( void ) const
{
	std::ofstream	output;

	output.open((this->_target + "_shrubbery").c_str(), std::ofstream::out | std::ofstream::app);
	output << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⡠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	output << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠂⡀⡀⠀⠀⡐⡀⠀⠀⠀⠠⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	output << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠀⠀⠢⡉⠄⠀⠐⠍⠂⠀⠀⢂⡄⠀⠀⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	output << "⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠻⠃⠸⠃⢠⠄⡀⠛⠀⡤⢀⠀⠛⠇⡀⡜⡠⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	output << "⠀⠀⠀⠀⠀⠀⢐⣄⠠⡀⠭⢠⠀⠁⠨⠼⠀⠀⠁⠥⠇⠀⡐⡁⠀⠡⡋⠄⢠⠀⢾⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	output << "⠀⠀⠀⢀⡀⠀⠈⠋⠃⠈⠈⠉⠐⢅⢲⠄⡘⡤⡰⣢⠐⡀⠷⠥⠀⠀⡠⠀⢦⡡⠙⢉⠔⣰⠂⠀⠀⠀⠀⠀⠀\n";
	output << "⠀⠀⠀⠈⢜⠶⣱⠸⣷⡄⢠⡟⡄⠈⠑⠊⠀⠈⠒⠓⠀⢧⢀⢔⣩⠰⣍⢆⠣⠮⠁⠦⡟⠆⠀⠀⠀⠀⠀⠀⠀\n";
	output << "⠈⠖⣦⢤⠄⠈⠑⡄⡬⣀⠘⢼⠻⢀⣤⢰⡀⠣⣫⢝⢦⢸⠪⢾⠒⡈⠾⢑⣠⠖⠴⣦⡔⡲⠂⡠⢶⠀⠀⠀⠀\n";
	output << "⠀⠈⠒⠃⠃⢲⡤⡘⠩⠳⠅⠀⢐⣷⡎⠘⠯⠂⠈⢤⣅⣸⡁⡴⣫⡇⢠⡞⣡⣀⣬⡱⠌⠀⠰⡵⣿⠀⠀⠀⠀\n";
	output << "⠀⠀⣀⣀⣀⠀⢩⣁⠸⣶⡆⡇⠈⠊⣁⠄⢛⣯⡳⠆⢠⣿⠀⠟⢳⣷⡟⡀⠻⠼⠖⠋⠀⠀⣀⠁⣥⢾⠀⠀⠀\n";
	output << "⠀⠀⠈⠛⣗⠧⠀⣙⣃⣀⡀⢰⡀⣾⣿⠀⣀⠈⠉⣰⣿⣿⠶⠖⠛⠋⠸⣟⣟⡶⠂⢀⢀⣾⣭⠸⡝⡿⠀⠀⠀\n";
	output << "⠀⣠⢖⡠⠀⠂⣩⣤⡌⠈⠙⢿⣷⡈⢠⣿⡏⠀⠀⣿⣿⠁⣀⠻⠟⠀⣠⡄⠀⢀⣶⣏⠘⠯⠟⠀⠀⣶⡶⣶⠆\n";
	output << "⠾⠿⠛⠁⠠⠾⠿⠟⠁⣴⣶⡆⠹⣿⣮⡈⠀⠀⠰⣿⡏⠘⠛⠋⠀⣼⢿⡇⠀⠸⢟⠞⠀⣀⢔⣤⣤⣝⡋⠁⠀\n";
	output << "⠀⠀⠀⠀⠀⠀⠀⠀⠚⠛⠙⠀⠀⠈⠻⣿⣶⣦⣴⣿⡇⠀⠀⠀⠀⣘⣾⣥⣤⡤⠶⠞⣋⣄⡐⠻⠽⠊⠀⠀⠀\n";
	output << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⢻⣿⣷⣄⣤⣶⠿⠋⠁⠀⢰⣽⣶⣄⠻⢿⡿⠶⠀⠀⠀⠀⠀\n";
	output << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⡟⠁⠀⠀⠀⠀⠀⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀\n";
	output << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	output << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	output << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	output << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠛⠛⠛⠓⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	output.close();
	//Create fiel <target>_shrubbery and write ascii tree inside
}
