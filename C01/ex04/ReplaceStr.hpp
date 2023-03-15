/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceStr.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:05:51 by gabriel           #+#    #+#             */
/*   Updated: 2023/03/13 13:17:21 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACESTR_HPP
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
