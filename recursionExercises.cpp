
#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<string>
#include <math.h>
using namespace std;

//1.Calculate S(n) = 1 + 2 + 3 + ... + n - 1 + n
int calculation1(int n)
{
	if (n == 1)
		return 1;
	return calculation1(n - 1) + n;
}
//2.Calculate S(n) = 1 ^ 2 + 2 ^ 2 + 3 ^ 2 + ... + (n - 1) ^ 2 + n ^ 2
int calculation2(int n)
{
	if (n == 1)
		return 1;
	return calculation2(n - 1) + n * n;
}
//3.Calculate S(n) = 1 + 1 / 2 + 1 / 3 + ... + 1 / n
float calculation3(float n)
{
	if (n == 1)
		return 1;
	return calculation3(n - 1) + 1 / n;
}
//4.Calculate S(n) = 1 / 2 + 1 / 4 + ... + 1 / 2n
float calculation4(float n)
{
	if (n == 1)
		return 0.5;
	return calculation4(n - 1) + 1 / (2 * n);
}
//5.Calculate S(n) = 1 + 1 / 3 + 1 / 5 + ... + 1 / (2n + 1)
float calculation5(float n)
{
	if (n == 1)
		return 1;
	return calculation5(n - 1) + 1 / (2 * n + 1);
}
//6.Calculate S(n) = 1 / (1 * 2) + 1 / (2 * 3) + 1 / (n(*n - 1))
float calculation6(float n)
{
	if (n == 1)
		return 0.5;
	return calculation6(n - 1) + 1 / (n*(n + 1));
}
//7.Calculate S(n) = 1 / 2 + 2 / 3 + 3 / 4 + ... + n / (n + 1)
float calculation7(float n)
{
	if (n == 1)
		return 0.5;
	return calculation7(n - 1) + n / (n + 1);
}
//8.Calculate S(n) = 1 / 2 + 3 / 4 + 5 / 6 + ... + (2n + 1) / (2n + 2)
float calculation8(float n)
{
	if (n == 1)
		return 0.5;
	return calculation8(n - 1) + (2 * n + 1) / (2 * n + 2);
}
//9.Calculate T(n) = 1 * 2 * 3 * .....*n
float calculation9(float n)
{
	if (n == 1)
		return 1;
	return calculation9(n - 1)*n;
}
//10.Calculate S(n) = 1 + 1.2 + 1.2.3 + .... + 1.2.3....n
long factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return factorial(n - 1)*n;
}
long sum(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return sum(n - 1) + factorial(n - 1)*n;
}

//11.Calculate S(x, n) = x + x ^ 2 + x ^ 3 + ... + x^n
float expo1(float x, int n)
{
	if (n == 0)
	{
		return 1;
	}
	return expo1(x, n - 1)*x;
}
float sum2(float x, int n)
{
	if (n == 1)
	{
		return x;
	}
	return sum2(x, n - 1) + expo1(x, n - 1)*x;
}

//12.Calculate S(x, n) = x ^ 2 + x ^ 4 + .... + x ^ 2n
double sum3(int x, int n)
{
	if (n == 1)
	{
		return x * x;
	}
	return sum3(x, n - 1) + pow(x, 2 * n);
}

//13.Calculate S(x, n) = x + x ^ 3 + x ^ 5 + .... + x ^ (2n + 1)
double calculation10(int x, int n)
{
	if (n == 0)
		return x;
	else
		return calculation10(x, n - 1) + pow(x, 2 * n + 1);
}

//14.Calculate S(n) = 1 + 1 / (1 + 2) + 1 / (1 + 2 + 3) + ... + 1 / (1 + 2 + 3 + ... + n)
float sum4(float n)
{
	if (n == 1)
	{
		return (float)1;
	}
	return sum4(n - 1) + n;
}
float sumDivision(float n)
{
	if (n == 1)
	{
		return (float)1;
	}
	return sumDivision(n - 1) + 1 / (sum4(n - 1) + n);
}
//15.Calculate T(x, n) = x^n
float expo2(float x, int n)
{
	if (n == 0)
	{
		return 1;
	}
	if (n < 0)
	{
		return expo2(x, n + 1) * 1 / x;
	}
	return expo2(x, n - 1) * x;
}

//16.Calculate S(x, n) = x + (x ^ 2) / 2!+ (x ^ 3) / 3!+ ... + (x^n) / n!
float expo3(float x, float n)
{
	if (n == 1)
	{
		return x;
	}
	return expo3(x, n - 1)*x;
}
float factorial2(float n)
{
	if (n == 1)
	{
		return (float)1;
	}
	return factorial2(n - 1)*n;
}
float expoDividesFactorial(float x, float n)
{
	if (n == 1)
	{
		return x;
	}
	return expoDividesFactorial(x, n - 1) + ((expo3(x, n - 1)*x) / (factorial2(n - 1)*n));
}
//17.Calculate S(x, n) = 1 + (x ^ 2) / 2!+ (x ^ 4) / 4!+ ... + (x ^ 2n) / (2n)!
float expo4(float x, float n)
{
	if (n == 0)
	{
		return (float)1;
	}
	return expo4(x, n - 1) *x*x;
}
float factorial3(float n)
{
	if (n == 0)
	{
		return (float)1;
	}
	return factorial3(n - 1)*n;
}
float expoDividesFactorial2(float x, float n)
{
	if (n == 0)
	{
		return (float)1;
	}
	return expoDividesFactorial2(x, n - 1) + ((expo4(x, n - 1)*x*x) / ((factorial3(2 * n - 1) * 2 * n)));
}
//18.Calculate S(n) = sqrt(2 + sqrt(2 + ... sqrt(2 + sqrt(2))))
float function(float n)
{
	if (n == 1)
	{
		return sqrt(2);
	}
	return sqrt(2 + function(n - 1));
}

//19.Calculate S(n) = sqrt(n + sqrt(n - 1 + sqrt(n - 2 + ...sqrt(2 + sqrt(1)))))
long double function2(long double n)
{
	if (n == 1)
	{
		return 1;
	}
	return sqrt(n + function2(n - 1));
}

//20.Calculate S(n) = sqrt(1 + sqrt(2 + sqrt (3 + ...sqrt (n-1 + sqrt (n)))))
float Function3(float i, float n)
{
	if (n == i)
		return sqrt(n);
	else return sqrt(i + Function3(i + 1, n));
}
//21.Calculate S(n) = 1 / (1 + 1 / (1 + 1 / (1 + 1 / (... 1 / (1 / (1 + 1 / (1 + 1)))))))
long double division(int n)
{
	if (n == 1)
	{
		return 1.0 / (1.0 + 1.0);
	}
	return 1 / (1 + division(n - 1));
}
//22.Calculate the sum of digits in the integer n
int sumOfDigits(int n)
{
	if (n == 0)
	{
		return 0;
	}
	return sumOfDigits(n / 10) + n % 10;
}

//23.Calculate the multiplication of digits in the integer n
int multiplication(int n)
{
	if (n == 0)
	{
		return 1;
	}
	return multiplication(n / 10) * (n % 10);
}
//24.Calculate the sum of the even digits in the integer n
int sumOfEvenDigits(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n % 2 == 0)
	{
		return sumOfEvenDigits(n / 10) + (n % 10);
	}
	return sumOfEvenDigits(n / 10);
}

//25.Calculate the sum of the odd digits in the integer n
int sumOfOddDigits(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n % 2 == 1)
	{
		return sumOfOddDigits(n / 10) * (n % 10);
	}
	return sumOfOddDigits(n / 10);
}
int main()
{
	int n;
	float m, x, i;
	long double p;
	cout << "Enter the integer needs to be calculated:";
	cin >> n;
	cout << "\nResult of S1(n) = " << calculation1(n);
	cout << "\nResult of S2(n) = " << calculation2(n);
	cout << "\nSum of S3(n) = " << sum(n);
	//----------------------------------------------------------

	cout << "\nEnter the real number needs to be calculated:";
	cin >> m;
	cout << "\nResult of S3(m) = " << calculation3(m);
	cout << "\nResult of S4(m) = " << calculation4(m);
	cout << "\nResult of S5(m) = " << calculation5(m);
	cout << "\nResult of S6(m) = " << calculation6(m);
	cout << "\nResult of S7(m) = " << calculation7(m);
	cout << "\nResult of S8(m) = " << calculation8(m);
	cout << "\nResult of T(m) = " << calculation9(m);
	cout << "\nSum of S7(x,n) = " << sumDivision(m);
	//----------------------------------------------------------

	cout << "\nEnter the real number 'x' needs to be calculated:";
	cin >> x;

	cout << "\nResult of T(x,n) = " << expo2(x, n);
	cout << "\nSum of S4(x,n) = " << sum2(x, n);
	cout << "\nSum of S5(x,n) = " << sum3(x, n);
	cout << "\nSum of S6(x,n) = " << calculation10(x, n);
	cout << "\nSum of S9(x,n) = " << expoDividesFactorial(x, m);
	cout << "\nSum of S10(x,n) = " << expoDividesFactorial2(x, m);
	cout << "\nSum of S11(n) = " << function(n);

	cout << "\nEnter the real number 'p' needs to be calculated:";
	cin >> p;

	cout << "\nSum of S12(n) = " << function2(p);

	cout << "\nEnter the real number 'i':";
	cin >> i;
	cout << "\nSum of S13(n) = " << Function3(i, n);
	cout << "\nResult of S14(n) = " << division(n);
	cout << "\nSum of S15(n) = " << sumOfDigits(n);
	cout << "\nResult of S16(n) = " << multiplication(n);
	cout << "\nResult of S17(n) = " << sumOfEvenDigits(n);
	cout << "\nResult of S18(n) = " << sumOfOddDigits(n);
	_getch();
	return 0;
}
