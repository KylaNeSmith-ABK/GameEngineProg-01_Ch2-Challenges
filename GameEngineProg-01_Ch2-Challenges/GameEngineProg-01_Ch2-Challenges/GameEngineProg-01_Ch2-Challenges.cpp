/// GameEngineProg-01_Ch2-Challenges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Utils.h"

void SumTest();
void AverageTest();
void CubeTest();

int main()
{
    std::cout << "-- AVERAGE --" << std::endl;

    AverageTest();

    std::cout << std::endl;

    std::cout << "-- SUM --" << std::endl;

    SumTest();

    std::cout << std::endl;

    std::cout << "-- CUBED --" << std::endl;

    CubeTest();

    std::cout << std::endl;
}

void SumTest()
{
    std::cout << "- Int -" << std::endl;
    int firstInt = 0, secondInt = 0, thirdInt = 0;
    std::cout << "Please insert first int number:" << std::endl;
    firstInt = Utils::InputIsIntValidation();
    std::cout << "Please insert second int number:" << std::endl;
    secondInt = Utils::InputIsIntValidation();
    std::cout << "Please insert third int number:" << std::endl;
    thirdInt = Utils::InputIsIntValidation();

    std::cout << "The sum of " << firstInt << ", " << secondInt << ", and " << thirdInt << " is " << Utils::Sum3Nums(firstInt, secondInt, thirdInt) << std::endl;

    std::cout << std::endl;

    std::cout << "- Float -" << std::endl;
    float firstFloat = 0.0f, secondFloat = 0.0f, thirdFloat = 0.0f;
    std::cout << "Please insert first float number:" << std::endl;
    firstFloat = Utils::InputIsFloatValidation();
    std::cout << "Please insert second float number:" << std::endl;
    secondFloat = Utils::InputIsFloatValidation();
    std::cout << "Please insert third float number:" << std::endl;
    thirdFloat = Utils::InputIsFloatValidation();

    std::cout << "The sum of " << firstFloat << ", " << secondFloat << ", and " << thirdFloat << " is " << Utils::Sum3Nums(firstFloat, secondFloat, thirdFloat) << std::endl;

    std::cout << std::endl;

    std::cout << "- Double -" << std::endl;
    double firstDouble = 0.0, secondDouble = 0.0, thirdDouble = 0.0;
    std::cout << "Please insert first double number:" << std::endl;
    firstDouble = Utils::InputIsDoubleValidation();
    std::cout << "Please insert second double number:" << std::endl;
    secondDouble = Utils::InputIsDoubleValidation();
    std::cout << "Please insert third double number:" << std::endl;
    thirdDouble = Utils::InputIsDoubleValidation();

    std::cout << "The sum of " << firstDouble << ", " << secondDouble << ", and " << thirdDouble << " is " << Utils::Sum3Nums(firstDouble, secondDouble, thirdDouble) << std::endl;
}

void AverageTest()
{
    std::cout << "- Int -" << std::endl;
    int firstInt = 0, secondInt = 0, thirdInt = 0;
    std::cout << "Please insert first int number:" << std::endl;
    firstInt = Utils::InputIsIntValidation();
    std::cout << "Please insert second int number:" << std::endl;
    secondInt = Utils::InputIsIntValidation();
    std::cout << "Please insert third int number:" << std::endl;
    thirdInt = Utils::InputIsIntValidation();

    std::cout << "The average of " << firstInt << ", " << secondInt << ", and " << thirdInt << " is " << Utils::Average3Nums(firstInt, secondInt, thirdInt) << std::endl;

    std::cout << std::endl;

    std::cout << "- Float -" << std::endl;
    float firstFloat = 0.0f, secondFloat = 0.0f, thirdFloat = 0.0f;
    std::cout << "Please insert first float number:" << std::endl;
    firstFloat = Utils::InputIsFloatValidation();
    std::cout << "Please insert second float number:" << std::endl;
    secondFloat = Utils::InputIsFloatValidation();
    std::cout << "Please insert third float number:" << std::endl;
    thirdFloat = Utils::InputIsFloatValidation();

    std::cout << "The average of " << firstFloat << ", " << secondFloat << ", and " << thirdFloat << " is " << Utils::Average3Nums(firstFloat, secondFloat, thirdFloat) << std::endl;

    std::cout << std::endl;

    std::cout << "- Double -" << std::endl;
    double firstDouble = 0.0, secondDouble = 0.0, thirdDouble = 0.0;
    std::cout << "Please insert first double number:" << std::endl;
    firstDouble = Utils::InputIsDoubleValidation();
    std::cout << "Please insert second double number:" << std::endl;
    secondDouble = Utils::InputIsDoubleValidation();
    std::cout << "Please insert third double number:" << std::endl;
    thirdDouble = Utils::InputIsDoubleValidation();

    std::cout << "The average of " << firstDouble << ", " << secondDouble << ", and " << thirdDouble << " is " << Utils::Average3Nums(firstDouble, secondDouble, thirdDouble) << std::endl;
}

void CubeTest()
{
    std::cout << "- Int -" << std::endl;
    int numInt = 0;
    std::cout << "Please insert an int number:" << std::endl;
    numInt = Utils::InputIsIntValidation();

    std::cout << numInt << " cubed is " << Utils::Cube(numInt) << std::endl;

    std::cout << std::endl;

    std::cout << "- Float -" << std::endl;
    float numFloat = 0.0f;
    std::cout << "Please insert a float number:" << std::endl;
    numFloat = Utils::InputIsFloatValidation();

    std::cout << numFloat << " cubed is " << Utils::Cube(numFloat) << std::endl;

    std::cout << std::endl;

    std::cout << "- Double -" << std::endl;
    double numDouble = 0.0;
    std::cout << "Please insert a double number:" << std::endl;
    numDouble = Utils::InputIsDoubleValidation();

    std::cout << numDouble << " cubed is " << Utils::Cube(numDouble) << std::endl;
}
