#pragma once

#include <iostream>
#include <limits>

class Utils
{
public:
	static int InputIsIntValidation();
	static float InputIsFloatValidation();
	static double InputIsDoubleValidation();

	static int Sum3Nums(int firstNum, int secondNum, int thirdNum);
	static float Sum3Nums(float firstNum, float secondNum, float thirdNum);
	static double Sum3Nums(double firstNum, double secondNum, double thirdNum);

	static int Average3Nums(int firstNum, int secondNum, int thirdNum);
	static float Average3Nums(float firstNum, float secondNum, float thirdNum);
	static double Average3Nums(double firstNum, double secondNum, double thirdNum);

	static int Cube(int num);
	static float Cube(float num);
	static double Cube(double num);
};