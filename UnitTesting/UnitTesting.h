#pragma once

#include "CppUnitTest.h"
#include "../Core/Core.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

class CombineStringTestFixture
{
public:
    static std::string stringOne;
    static std::string stringTwo;

    static void Setup()
    {
        // Assign values to stringOne and stringTwo
        stringOne = "Hello";
        stringTwo = "World";
    }

    static void TearDown()
    {
        // Reset values to empty strings
        stringOne.clear();
        stringTwo.clear();
    }
};

std::string CombineStringTestFixture::stringOne;
std::string CombineStringTestFixture::stringTwo;

TEST_CLASS(UnitTests)
{
public:
    TEST_CLASS_INITIALIZE(ClassSetup)
    {
        CombineStringTestFixture::Setup();
    }

    TEST_CLASS_CLEANUP(ClassCleanup)
    {
        CombineStringTestFixture::TearDown();
    }

    TEST_METHOD(TestCombineString1);
    TEST_METHOD(TestCombineString2);
    TEST_METHOD(TestCombineString3);
};