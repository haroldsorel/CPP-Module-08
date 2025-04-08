/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:59:24 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/04/08 19:59:25 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <deque>

 /*  
        *   Stack are not a primary container they are based on
        *   another one and restricts it so there is no iteration
        *   and no index access. by default it is deque but can be explicited
        *   another way. The data is actually stored inside that hidden container
        *   
        *   To access the type of that container you can use stack<T>::container_type
        *   and once you have the type you can do stack<T>::container_type::iterator
        *   to get access to the iterator
        * 
        *   This is where std::deque<T>::container_type::iterator comes from and we
        *   gave it a typedef named iterator so we can replicate this behaviour
        *   in our custom class
*/


template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        //this is supposed to mimic the iterator type of any itarable containers like vector
        //itv = vector<T>::iterator == itm = MutantStack<T>::iterator
        typedef typename std::stack<T>::container_type::iterator iterator;
        MutantStack() {}
        MutantStack(const MutantStack &src) {} //ToDo
        ~MutantStack() {}
        MutantStack &operator=(const MutantStack &src)
        {
            if (this != &src)
            {
                 //ToDo
            }
            return (*this);
        }
        iterator begin()
        {
            return(this->c.begin());
        }
        iterator end()
        {
            return (this->c.end());
        }
};