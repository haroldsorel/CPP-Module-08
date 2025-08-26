/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:35:08 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/04/08 12:35:09 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>

class Span
{
    private:
        unsigned int                _size; 
        std::vector<int>   _span;
    public:
        Span(unsigned int N);
        Span(const Span &src);
        ~Span();
        Span &operator=(const Span &src);

        void            addNumber(int n);
        void            addNumber(unsigned int range, int base);
        unsigned int    shortestSpan()const;
        unsigned int    longestSpan()const;
        void            printNumbers()const;

        class SpanFull : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return ("Span Is Full");
                }
        };
        class SpanInvalidSize : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return ("Span Must Contain At Least Two Elements");
                }
        };
};

