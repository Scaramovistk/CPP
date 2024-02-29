/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:30:52 by gscarama          #+#    #+#             */
/*   Updated: 2023/09/18 15:31:42 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <ctime>
#include <iomanip>

class PmergeMe
{
	private:
		std::vector<int>	_vec;
		std::deque<int>		_dque;
		double				Vtime;
		double				Dtime;
	public:
		PmergeMe(char **argv);
		PmergeMe(const PmergeMe &other);
		const PmergeMe& operator=(const PmergeMe &other);
		~PmergeMe(void);
		void	is_Num(char *tab);
		void	printVector( void );
		template <typename T>
		void	merge_sort(T& lst, int beg, int end);
		template <typename T>
		void	merge(T & lst, int left, int mid, int right);
		template <typename T>
		void insert(T& lst, int p, int q);
};

#endif
