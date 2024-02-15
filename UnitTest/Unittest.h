#pragma once

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

// To run the unit tests I used the cppunit test framework from microsoft and used a mock to model 
namespace CoreMock
{
    // Static variables to mock stringOne and stringTwo
    static std::string stringOne = "";
    static std::string stringTwo = "";

    // Function to set the value of stringOne
    void setStringOne(const std::string& str)
    {
        stringOne = str;
    }

    // Function to set the value of stringTwo
    void setStringTwo(const std::string& str)
    {
        stringTwo = str;
    }

    // Function to combine stringOne and stringTwo
    std::string combineString()
    {
        return stringOne + stringTwo;
    }
}

// Test class for Core library, it has all of the test methods to test combine string
// The first two methods are based off of the initialize and clean-up from the link on github
TEST_CLASS(CoreTests)
{
public:
    // Method to initialize test data before each test method
    TEST_METHOD_INITIALIZE(TestInitialize)
    {
        // Initialization code before each test method
        CoreMock::setStringOne("Hello "); // Set stringOne to "Hello "
        CoreMock::setStringTwo("World!"); // Set stringTwo to "World!"
    }

    // Method to cleanup test data after each test method
    TEST_METHOD_CLEANUP(TestCleanup)
    {
        // cleanup code after each test method
        CoreMock::setStringOne(""); // Reset stringOne to empty
        CoreMock::setStringTwo(""); // Reset stringTwo to empty
    }

    // Test method to validate combineString function with non-empty strings
    TEST_METHOD(TestCombineString)
    {
        // Arrange
        std::string expected = "Hello World!"; // Expected combined string

        // Act
        std::string result = CoreMock::combineString(); // Call combineString function

        // Assert
        Assert::AreEqual(expected, result); // Check if result matches expected
    }

    // Test method to validate combineString function with an empty stringone
    TEST_METHOD(TestCombineStringWithEmptyStringOne)
    {
        // Arrange
        CoreMock::setStringOne(""); // Set stringOne to empty
        std::string expected = "World!"; // Expected combined string

        // Act
        std::string result = CoreMock::combineString(); // Call combineString function

        // Assert
        Assert::AreEqual(expected, result); // Check if result matches expected
    }

    // Test method to validate combineString function with an empty stringTwod
    TEST_METHOD(TestCombineStringWithEmptyStringTwo)
    {
        // Arrange
        CoreMock::setStringTwo(""); // Set stringTwo to empty
        std::string expected = "Hello "; // Expected combined string

        //Act
        std::string result = CoreMock::combineString(); // Call combineString function

        // Assert
        Assert::AreEqual(expected, result); // Check if result matches expected
    }
};