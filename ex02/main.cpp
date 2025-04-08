/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:58:42 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/04/08 19:58:43 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    std::stack<int> numStack;
    numStack.push(1);
    numStack.push(2);
    numStack.push(3);
    std::vector<int> numVector;
    numVector.push_back(1);
    numVector.push_back(2);
    numVector.push_back(3);
    std::vector<std::string> stringVector;
    stringVector.push_back("hello");
    stringVector.push_back("my");
    stringVector.push_back("friend");
    MutantStack<int> numMutantStack;
    numMutantStack.push(1);
    numMutantStack.push(2);
    numMutantStack.push(3);
    MutantStack<std::string> stringMutantStack;
    stringMutantStack.push("hello");
    stringMutantStack.push("my");
    stringMutantStack.push("friend");

    std::vector<int>::iterator itv;
    for (itv = numVector.begin(); itv != numVector.end(); itv++)
        std::cout << *itv << std::endl;
    std::vector<std::string>::iterator itv1;
    for (itv1 = stringVector.begin(); itv1 != stringVector.end(); itv1++)
        std::cout << *itv1 << std::endl;
    /*std::stack<int>::iterator its;
    for (its = numVector.begin(); its != numVector.end(); its++)
        std::cout << *itv << std::endl;*/
    MutantStack<int>::iterator itm;
    for (itm = numMutantStack.begin(); itm != numMutantStack.end(); itm++)
        std::cout << *itm << std::endl;
    MutantStack<std::string>::iterator itm1;
    for (itm1 = stringMutantStack.begin(); itm1 != stringMutantStack.end(); itm1++)
        std::cout << *itm1 << std::endl;
}
