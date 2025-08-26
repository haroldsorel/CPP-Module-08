/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:34:13 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/04/08 12:34:14 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
int main()
{
    Span spanA(5);
    Span spanB(10000);
    Span spanC(10);
    Span spanD(10);
    Span spanE(10);

    std::cout << std::endl;
    try 
    {
        spanA.addNumber(0);
        spanA.addNumber(1);
        spanA.addNumber(2);
        spanA.addNumber(3);
        spanA.addNumber(4);
        spanA.addNumber(5);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        spanB.addNumber(20, 2);
    }
    catch(const std::exception& e) {}
    try
    {
        spanC.addNumber(12, 2);
    }
    catch(const std::exception& e)
    {}
    spanD.addNumber(99);
    std::cout << std::endl;
    std::cout << "----------Printing Span Numbers----------" <<std::endl;
    spanA.printNumbers();
    std::cout << std::endl;
    spanB.printNumbers();
    std::cout << std::endl;
    spanC.printNumbers();
    std::cout << std::endl;
    spanD.printNumbers();
    std::cout << std::endl;
    spanE.printNumbers();
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "----------Printing Shortest Spans----------" <<std::endl;
    std::cout << spanA.shortestSpan() << std::endl;
    std::cout << spanB.shortestSpan() << std::endl;
    std::cout << spanC.shortestSpan() << std::endl;
    try
    {
        std::cout << spanD.shortestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << spanE.shortestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout <<  std::endl;
    std::cout << "----------Printing Longest Spans----------" <<std::endl;
    std::cout << spanA.longestSpan() << std::endl;
    std::cout << spanB.longestSpan() << std::endl;
    std::cout << spanC.longestSpan() << std::endl;
    try
    {
        std::cout << spanD.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << spanE.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
*/

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}