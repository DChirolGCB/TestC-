/*
 * Filename: c:\Users\ocdav\source\repos\firstproject\src\main.cpp
 * Path: c:\Users\ocdav\source\repos\firstproject\src
 * Created Date: Sunday, December 12th 2021, 4:18:41 pm
 * Author: David Chirol
 * 
 * Copyright (c) 2021 Beurre
 */


#include <format>
#include <iostream>
#include <cstdlib>

int main(int ac, char **av)
{
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << std::format("j'ai {} couilles", i) << std::endl;
    }

    return (0);
}