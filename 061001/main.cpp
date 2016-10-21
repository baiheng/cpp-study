/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/01/2016 10:57:48 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <stdlib.h>

extern char** environ;

int main()
{
    std::cout << "hello world" << std::endl;
    char** env = environ;
    while(*env)
    {
        std::cout << *env << std::endl;
        env++;
    };
    std::cout << getenv("PATH") << std::endl;
    return 0;
}
