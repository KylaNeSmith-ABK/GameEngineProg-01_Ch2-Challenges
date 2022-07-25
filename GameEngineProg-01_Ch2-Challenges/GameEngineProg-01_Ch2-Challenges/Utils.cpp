#include "Utils.h"

int Utils::InputIsIntValidation()
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

float Utils::InputIsFloatValidation()
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

double Utils::InputIsDoubleValidation()
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

int Utils::Sum3Nums(int firstNum, int secondNum, int thirdNum)
{
    return firstNum + secondNum + thirdNum;
}

float Utils::Sum3Nums(float firstNum, float secondNum, float thirdNum)
{
    return firstNum + secondNum + thirdNum;
}

double Utils::Sum3Nums(double firstNum, double secondNum, double thirdNum)
{
    return firstNum + secondNum + thirdNum;
}

int Utils::Average3Nums(int firstNum, int secondNum, int thirdNum)
{
    return Sum3Nums(firstNum, secondNum, thirdNum) / 3.0f;
}

float Utils::Average3Nums(float firstNum, float secondNum, float thirdNum)
{
    return Sum3Nums(firstNum, secondNum, thirdNum) / 3;
}

double Utils::Average3Nums(double firstNum, double secondNum, double thirdNum)
{
    return Sum3Nums(firstNum, secondNum, thirdNum) / 3;
}

int Utils::Cube(int num)
{
    return num * num * num;
}

float Utils::Cube(float num)
{
    return num * num * num;
}

double Utils::Cube(double num)
{
    return num * num * num;
}
