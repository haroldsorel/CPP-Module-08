/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:29:26 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/04/08 11:29:27 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <list>

class ValueNotFound: public std::exception
{
	public:
			virtual const char *what() const throw()
			{
				return ("Value Not found");
			}
};

template <typename T>
typename T::iterator    easyfind(T &container, int n)
{
    typename T::iterator it;
    
    it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
        throw (ValueNotFound());
    return (it);
}
