/// GameEngineProg-01_Ch2-Challenges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits>

int Sum3Nums(int firstNum, int secondNum, int thirdNum);
float Sum3Nums(float firstNum, float secondNum, float thirdNum);
double Sum3Nums(double firstNum, double secondNum, double thirdNum);

int Average3Nums(int firstNum, int secondNum, int thirdNum);
float Average3Nums(float firstNum, float secondNum, float thirdNum);
double Average3Nums(double firstNum, double secondNum, double thirdNum);

int Cube(int num);
float Cube(float num);
double Cube(double num);

int InputIsIntValidation();
float InputIsFloatValidation();
double InputIsDoubleValidation();

int main()
{
    std::cout << "-- AVERAGE & SUM --" << std::endl;

    std::cout << "- Int -" << std::endl;
    int firstInt = 0, secondInt = 0, thirdInt = 0;
    std::cout << "Please insert first int number:" << std::endl;
    firstInt = InputIsIntValidation();
    std::cout << "Please insert second int number:" << std::endl;
    secondInt = InputIsIntValidation();
    std::cout << "Please insert third int number:" << std::endl;
    thirdInt = InputIsIntValidation();

    std::cout << "The sum of " << firstInt << ", " << secondInt << ", and " << thirdInt << " is " << Sum3Nums(firstInt, secondInt, thirdInt) << std::endl;
    std::cout << "The average of " << firstInt << ", " << secondInt << ", and " << thirdInt << " is " << Average3Nums(firstInt, secondInt, thirdInt) << std::endl;

    std::cout << std::endl;

    std::cout << "- Float -" << std::endl;
    float firstFloat = 0.0f, secondFloat = 0.0f, thirdFloat = 0.0f;
    std::cout << "Please insert first float number:" << std::endl;
    firstFloat = InputIsFloatValidation();
    std::cout << "Please insert second float number:" << std::endl;
    secondFloat = InputIsFloatValidation();
    std::cout << "Please insert third float number:" << std::endl;
    thirdFloat = InputIsFloatValidation();

    std::cout << "The sum of " << firstFloat << ", " << secondFloat << ", and " << thirdFloat << " is " << Sum3Nums(firstFloat, secondFloat, thirdFloat) << std::endl;
    std::cout << "The average of " << firstFloat << ", " << secondFloat << ", and " << thirdFloat << " is " << Average3Nums(firstFloat, secondFloat, thirdFloat) << std::endl;

    std::cout << std::endl;

    std::cout << "- Double -" << std::endl;
    double firstDouble = 0.0, secondDouble = 0.0, thirdDouble = 0.0;
    std::cout << "Please insert first double number:" << std::endl;
    firstDouble = InputIsDoubleValidation();
    std::cout << "Please insert second double number:" << std::endl;
    secondDouble = InputIsDoubleValidation();
    std::cout << "Please insert third double number:" << std::endl;
    thirdDouble = InputIsDoubleValidation();

    std::cout << "The sum of " << firstDouble << ", " << secondDouble << ", and " << thirdDouble << " is " << Sum3Nums(firstDouble, secondDouble, thirdDouble) << std::endl;
    std::cout << "The average of " << firstDouble << ", " << secondDouble << ", and " << thirdDouble << " is " << Average3Nums(firstDouble, secondDouble, thirdDouble) << std::endl;

    std::cout << std::endl;

    std::cout << "-- CUBED --" << std::endl;

    std::cout << "- Int -" << std::endl;
    int numInt = 0;
    std::cout << "Please insert an int number:" << std::endl;
    numInt = InputIsIntValidation();

    std::cout << numInt << " cubed is " << Cube(numInt) << std::endl;

    std::cout << std::endl;

    std::cout << "- Float -" << std::endl;
    float numFloat = 0.0f;
    std::cout << "Please insert a float number:" << std::endl;
    numFloat = InputIsFloatValidation();

    std::cout << numFloat << " cubed is " << Cube(numFloat) << std::endl;

    std::cout << std::endl;

    std::cout << "- Double -" << std::endl;
    double numDouble = 0.0;
    std::cout << "Please insert a double number:" << std::endl;
    numDouble = InputIsDoubleValidation();

    std::cout << numDouble << " cubed is " << Cube(numDouble) << std::endl;

    std::cout << std::endl;
}

int Sum3Nums(int firstNum, int secondNum, int thirdNum)
{
    return firstNum + secondNum + thirdNum;
}

float Sum3Nums(float firstNum, float secondNum, float thirdNum)
{
    return firstNum + secondNum + thirdNum;
}

double Sum3Nums(double firstNum, double secondNum, double thirdNum)
{
    return firstNum + secondNum + thirdNum;
}

int Average3Nums(int firstNum, int secondNum, int thirdNum)
{
    return (int)Sum3Nums(firstNum, secondNum, thirdNum) / 3;
}

float Average3Nums(float firstNum, float secondNum, float thirdNum)
{
    return Sum3Nums(firstNum, secondNum, thirdNum) / 3.0f;
}

double Average3Nums(double firstNum, double secondNum, double thirdNum)
{
    return Sum3Nums(firstNum, secondNum, thirdNum) / 3;
}

int Cube(int num)
{
    return num * num * num;
}

float Cube(float num)
{
    return num * num * num;
}

double Cube(double num)
{
    return num * num * num;
}

int InputIsIntValidation()
{
    int num = 0;

    bool validInput = false;
    while (!validInput)
    {
        if (std::cin >> num)
        {
            return num;
        }
        else
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Please provide a valid integer" << std::endl;
        }
    }
}

float InputIsFloatValidation()
{
    float num = 0.0f;

    bool validInput = false;
    while (!validInput)
    {
        if (std::cin >> num)
        {
            return num;
        }
        else
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Please provide a valid float" << std::endl;
        }
    }
}

double InputIsDoubleValidation()
{
    double num = 0.0;

    bool validInput = false;
    while (!validInput)
    {
        if (std::cin >> num)
        {
            return num;
        }
        else
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Please provide a valid double" << std::endl;
        }
    }
}
