/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:29:35 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/04/08 11:29:36 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> numVector;
    std::set<int> numSet;
    std::vector<int>::iterator	iti;
    std::set<int>::iterator	itc;

    numVector.push_back(2);
    numVector.push_back(3);
    numVector.push_back(65);
    numVector.push_back(98);
    numSet.insert(34);
    numSet.insert(35);
    numSet.insert(36);
    numSet.insert(37);
    try
    {
        iti = ::easyfind(numVector, 65);
        std::cout << "Found : " << *iti << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        iti = ::easyfind(numVector, -5);
        std::cout << "Found : " << *iti << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        itc = ::easyfind(numSet, 37);
        std::cout << "Found : " << *itc << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        itc = ::easyfind(numSet, 99);
        std::cout << "Found : " << *itc << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}