/// GameEngineProg-01_Ch2-Challenges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits>
using namespace std;

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
    cout << "-- AVERAGE & SUM --" << endl;

    cout << "- Int -" << endl;
    int firstInt = 0, secondInt = 0, thirdInt = 0;
    cout << "Please insert first int number:" << endl;
    firstInt = InputIsIntValidation();
    cout << "Please insert second int number:" << endl;
    secondInt = InputIsIntValidation();
    cout << "Please insert third int number:" << endl;
    thirdInt = InputIsIntValidation();

    cout << "The sum of " << firstInt << ", " << secondInt << ", and " << thirdInt << " is " << Sum3Nums(firstInt, secondInt, thirdInt) << endl;
    cout << "The average of " << firstInt << ", " << secondInt << ", and " << thirdInt << " is " << Average3Nums(firstInt, secondInt, thirdInt) << endl;

    cout << endl;

    cout << "- Float -" << endl;
    float firstFloat = 0.0f, secondFloat = 0.0f, thirdFloat = 0.0f;
    cout << "Please insert first float number:" << endl;
    firstFloat = InputIsFloatValidation();
    cout << "Please insert second float number:" << endl;
    secondFloat = InputIsFloatValidation();
    cout << "Please insert third float number:" << endl;
    thirdFloat = InputIsFloatValidation();

    cout << "The sum of " << firstFloat << ", " << secondFloat << ", and " << thirdFloat << " is " << Sum3Nums(firstFloat, secondFloat, thirdFloat) << endl;
    cout << "The average of " << firstFloat << ", " << secondFloat << ", and " << thirdFloat << " is " << Average3Nums(firstFloat, secondFloat, thirdFloat) << endl;

    cout << endl;

    cout << "- Double -" << endl;
    double firstDouble = 0.0, secondDouble = 0.0, thirdDouble = 0.0;
    cout << "Please insert first double number:" << endl;
    firstDouble = InputIsDoubleValidation();
    cout << "Please insert second double number:" << endl;
    secondDouble = InputIsDoubleValidation();
    cout << "Please insert third double number:" << endl;
    thirdDouble = InputIsDoubleValidation();

    cout << "The sum of " << firstDouble << ", " << secondDouble << ", and " << thirdDouble << " is " << Sum3Nums(firstDouble, secondDouble, thirdDouble) << endl;
    cout << "The average of " << firstDouble << ", " << secondDouble << ", and " << thirdDouble << " is " << Average3Nums(firstDouble, secondDouble, thirdDouble) << endl;

    cout << endl;

    cout << "-- CUBED --" << endl;

    cout << "- Int -" << endl;
    int numInt = 0;
    cout << "Please insert an int number:" << endl;
    numInt = InputIsIntValidation();

    cout << numInt << " cubed is " << Cube(numInt) << endl;

    cout << endl;

    cout << "- Float -" << endl;
    float numFloat = 0.0f;
    cout << "Please insert a float number:" << endl;
    numFloat = InputIsFloatValidation();

    cout << numFloat << " cubed is " << Cube(numFloat) << endl;

    cout << endl;

    cout << "- Double -" << endl;
    double numDouble = 0.0;
    cout << "Please insert a double number:" << endl;
    numDouble = InputIsDoubleValidation();

    cout << numDouble << " cubed is " << Cube(numDouble) << endl;

    cout << endl;
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
        if (cin >> num)
        {
            return num;
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please provide a valid integer" << endl;
        }
    }
}

float InputIsFloatValidation()
{
    float num = 0.0f;

    bool validInput = false;
    while (!validInput)
    {
        if (cin >> num)
        {
            return num;
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please provide a valid float" << endl;
        }
    }
}

double InputIsDoubleValidation()
{
    double num = 0.0;

    bool validInput = false;
    while (!validInput)
    {
        if (cin >> num)
        {
            return num;
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please provide a valid double" << endl;
        }
    }
}
