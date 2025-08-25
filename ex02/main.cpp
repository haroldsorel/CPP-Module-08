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
    //to show that there is no iterator
    //std::stack<int>::iterator its;
    //for (its = numStack.begin(); its != numStack.end(); its++)
    //    std::cout << *itv << std::endl;
    MutantStack<int>::iterator itm;
    for (itm = numMutantStack.begin(); itm != numMutantStack.end(); itm++)
        std::cout << *itm << std::endl;
    MutantStack<std::string>::iterator itm1;
    for (itm1 = stringMutantStack.begin(); itm1 != stringMutantStack.end(); itm1++)
        std::cout << *itm1 << std::endl;
}


/*
int main()
{
    std::list<int> mlist;

    mlist.push_back(5);
    mlist.push_back(17);
    std::cout << mlist.back() << std::endl; // prints 17
    mlist.pop_back();
    std::cout << mlist.size() << std::endl; // prints 1

    mlist.push_back(3);
    mlist.push_back(5);
    mlist.push_back(737);
    //[...]
    mlist.push_back(0);

    std::list<int>::iterator it = mlist.begin();
    std::list<int>::iterator ite = mlist.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    // With a list you don’t directly construct a stack, but you can copy the list if needed:
    std::list<int> s(mlist);

    return 0;
}
*/
/*
int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}
*/