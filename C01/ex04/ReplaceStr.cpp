/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceStr.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:05:54 by gabriel           #+#    #+#             */
/*   Updated: 2023/03/13 13:26:11 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReplaceStr.hpp"

ReplaceStr::ReplaceStr(std::string fname, std::string s1, std::string s2)
	: _fname(fname), _s1(s1), _s2(s2)
{
	std::cout << "Opening your file..." << std::endl;
}

ReplaceStr::~ReplaceStr(void)
{
	std::cout << "Closing your file..." << std::endl;
}

int ReplaceStr::openFile(void)
{
	std::ifstream	file;
	std::ofstream	nfile;
	std::string		str;

	if (this->_fname.size() == 0 || this->_s1.size() == 0 || this->_s2.size() == 0)
		return (-1);
	file.open(this->_fname);
	if (!file.is_open())
		return (-1);
	nfile.open(this->_fname + ".replace");
	if (nfile.is_open())
	{
		while (file.good())
		{
			std::getline(file, str);
			if (this->replaceWord(&str))
			{
				file.close();
				nfile.close();
				return (-2);
			}
			nfile << str << std::endl;
		}
	}
	else
		return (-1);
	file.close();
	nfile.close();
	return (0);
}

int ReplaceStr::replaceWord(std::string *str)
{
	std::size_t	index;

	if (!str || str->size() == std::string::npos)
		return (-1);
	while ((index = (*str).find(this->_s1)) != std::string::npos)
	{
		(*str).erase(index, this->_s1.length());
		(*str).insert(index, this->_s2);
	}
	return (0);
}
