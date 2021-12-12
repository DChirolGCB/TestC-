/**
 * @file main.cpp
 * @author Nicolas IRAGNE (thierry@stadedefrance.fr)
 * @brief This file defines the entry point of the David project.
 * @date 2021-12-12
 * 
 * @copyright Copyright JambonCorp (c) 2021
 */

#include "david.h"
#include <iostream>

int main(int ac, char **av)
{
    int ret = david::add(coucou, 8);
    std::cout << "coucou + 8 = " << ret << std::endl;
    return (0);
}