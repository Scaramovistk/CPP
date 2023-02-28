/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceStr.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:05:51 by gabriel           #+#    #+#             */
/*   Updated: 2023/02/27 13:39:41 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPlACESTR_HPP
#define REPLACESTR_HPP

#include <iostream>
#include <fstream>
#include <string>

class ReplaceStr
{
	private:
		std::string	_fname;
		std::string	_s1;
		std::string	_s2;

	public:
		ReplaceStr(std::string fname, std::string s1, std::string s2);
		~ReplaceStr(void);
		int	openFile(void);
		int	replaceWord(std::string *str);
};

#endif
