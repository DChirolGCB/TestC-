/**
 * @file utils.cpp
 * @author Nicolas IRAGNE (thierry@stadedefrance.fr)
 * @brief Basic functions for the project
 * @date 2021-12-12
 * 
 * @copyright Copyright Alyce (c) 2021
 */

#include "david.h"

int david::add(int a, int b)
{
#ifdef GOGOLE_VERSION
    return a + b + a + 2 - 44;
#else
    return a + b;
#endif
}
