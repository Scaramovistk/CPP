/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:30:49 by gscarama          #+#    #+#             */
/*   Updated: 2023/09/18 15:38:15 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **argv)
{
	std::clock_t	start, end;
	int				row;
	int				nb;
	
	row = 1;
	nb = 0;
	while (argv[row])
	{
		is_Num(argv[row]);
		std::istringstream(argv[row]) >> nb;
		this->_vec.push_back(nb);
		this->_dque.push_back(nb);
		row++;
	}
	std::cout << "Before: ";
	printVector();
	start = clock();
	merge_sort(_vec, 0, _vec.size() - 1);
	end = clock();
	this->Vtime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;
	start = clock();
	merge_sort(_dque, 0, _dque.size() - 1);
	end = clock();
	this->Dtime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	*this = other;
}

const PmergeMe& PmergeMe::operator=(const PmergeMe &other)
{
	if (this == &other)
		return (*this);
	this->_vec = other._vec;
	this->_dque = other._dque;
	return (*this);
}

PmergeMe::~PmergeMe(void)
{
	std::cout << "After:  ";
	printVector();
	std::cout << std::fixed << std::setprecision(5);
	std::cout << "Time to process a range of "<< _vec.size() <<  " elements with std::vector : " << Vtime << " us\n";
	std::cout << "Time to process a range of "<< _dque.size() <<  " elements with std::deque  : " << Dtime << " us\n";

}

void	PmergeMe::is_Num(char *argv)
{
	std::string str = argv;
	if (str[0] == '-')
		throw std::invalid_argument("Error: not a positive number.");
	if (str.length() > 10 || (str.length() == 10 && str > "2147483647"))
		throw std::invalid_argument("Error: number too big.");
	if (!str.empty() && str.find_first_not_of("0123456789") != std::string::npos)
		throw std::invalid_argument("Error: not a number.");
	if (str.empty())
		throw std::invalid_argument("Error: not a number.");
}

void	PmergeMe::printVector( void )
{
	int	row;

	row = 0;
	for (std::vector<int>::iterator it = _vec.begin(); it < _vec.end(); it++)
	{
		if(row > 3)
		{
			if ((it + 1) != _vec.end())
			{
				std::cout << " [...]";
				break;
			}
		}
		std::cout << " " << *it;
		row++;
	}
	std::cout << std::endl;
}

template< typename T >
void	PmergeMe::merge_sort(T& lst, int beg, int end)
{
	int	mid;
	if (end - beg > 5)
	{
		mid = (beg + end) / 2;
		merge_sort(lst, beg, mid);
		merge_sort(lst, mid+1, end);
		merge(lst, beg, mid, end);
	}
	else
		insert(lst, beg, end);
}

template< typename T >
void PmergeMe::insert(T& lst, int left, int right)
{
	for (int i = left; i < right; i++)
	{
		int tmp = lst[i + 1];
		int j = i + 1;
		while (j > left && lst[j - 1] > tmp)
		{
			lst[j] = lst[j - 1];
			j--;
		}
		lst[j] = tmp;
	}
}

template< typename T >
void	PmergeMe::merge(T & lst, int left, int mid, int right)
{
	std::vector<int>	temp(right - left + 1);
	int					i, j, k;

	k = 0;
	i = left;
	j = mid + 1;
	while (i <= mid && j <= right)
	{
		if (lst[i] <= lst[j])
			temp[k] = lst[i++];
		else
			temp[k] = lst[j++];
		k++;
	}
	while (i <= mid)
		temp[k++] = lst[i++];
	while (j <= right)
		temp[k++] = lst[j++];
	for (int p = 0; p < k; p++)
		lst[left + p] = temp[p];
}
