// Core.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Core.h"


// This is an example of an exported variable
int nCore = 0;

// This is an example of an exported function.
int fnCore(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CCore::CCore()
{
    return;
}

/*
 * Case Sensitive Implementation of startsWith()
 * It checks if the string 'mainStr' starts with given string 'toMatch'
 * https://thispointer.com/c-check-if-a-string-starts-with-an-another-given-string/
 */
std::string combinesString(const std::string& stringOne, const std::string& stringTwo)
{
    if (stringOne == "")
    {
        return stringTwo;
    }
    else if (stringTwo == "")
    {
        return stringOne;
    }
    else
    {
        return stringOne + stringTwo;
    }
}