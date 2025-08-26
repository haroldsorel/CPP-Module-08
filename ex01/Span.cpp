/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:34:58 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/04/08 12:34:58 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _size(N)
{
    
}
Span::Span(const Span &src) : _size(src._size), _span(src._span)
{

}
Span::~Span()
{

}
Span &Span::operator=(const Span &src)
{
    if (this != &src)
    {
        this->_size = src._size;
        this->_span = src._span;
    }
    return (*this);
}

void    Span::addNumber(int n)
{
    if ((this->_span).size() >= this->_size)
        throw (Span::SpanFull());
    (this->_span).push_back(n);
}

void	Span::addNumber(unsigned int range, int base)
{
	for (size_t i = 0; i < range; i++)
	{
		try
		{
			addNumber(base * i);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}

void    Span::printNumbers()const
{
    for (size_t i = 0; i < (this->_span).size(); i++)
        std::cout << (this->_span)[i] << std::endl;
}


/*
    a span is the difference between 2 numbers. the smallest span is the smallest difference
    between 2 numbers. this is found out knowing 2 numbers that are very close to each other.
    5 and 9 has a span of 4, same as 10 and 14. To efficiently find these you can sort the container
    and they will be side by side. Now instead of comparing one to every other you can just
    compare adjacent pairs
*/
unsigned int Span::shortestSpan()const
{
    std::vector<int>    sorted_copy;
    unsigned int        span = std::numeric_limits<int>::max();
    unsigned int        diff;

    sorted_copy = this->_span;
    if ((this->_span).size() == 0 || (this->_span).size() == 1)
        throw (Span::SpanInvalidSize());
    std::sort(sorted_copy.begin(), sorted_copy.end());
    for (size_t i = 0, j = 1; j < sorted_copy.size(); i++, j++)
    {
        diff = sorted_copy[j] - sorted_copy[i];
        if (diff < span)
            span = diff;
    }
    return (span);
}

/*
    a span is the difference between 2 numbers. The longest span is biggest
    difference between 2 numbers. This is very easy. Find the biggest number
    and the smallest number and you will find the biggest difference
*/
unsigned int Span::longestSpan()const
{
    std::vector<int>::const_iterator max;
    std::vector<int>::const_iterator min;

    if ((this->_span).size() == 0 || (this->_span).size() == 1)
        throw (Span::SpanInvalidSize());
    max = std::max_element((this->_span).begin(), (this->_span).end());
    min = std::min_element((this->_span).begin(), (this->_span).end());
    return (static_cast<unsigned int>(*max - *min));
}

