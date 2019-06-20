#include"No16to21LogicIntegrity.h"
#include<algorithm>
#include<iostream>
using namespace std;

double No16to21LogicIntegrity::No16PowerWithUnsignedExponent(double base, unsigned int exponent) {
	if (exponent == 0)
		return 1;// when base is 0, it also works. 
	if (exponent == 1||base==0||base==1) {
		return base;
	}
	double result = No16PowerWithUnsignedExponent(base, exponent >> 1);
	result *= result;
	if (exponent & 0x1 == 1)
		result *= base;
	return result;
}

void No16to21LogicIntegrity::No17PrintNumbers(char* number) {
	bool bFlag = false;
	int length = strlen(number);
	for (size_t i = 0; i < length; i++)
	{
		if (!bFlag && *(number + i) != '0')
			bFlag = true;
		if (bFlag)
			cout << number[i];
	}
	cout << "\t";
}

void No16to21LogicIntegrity::No17Print1ToNCore(char* number, int length, int index) {
	if (index == length) {
		No17PrintNumbers(number);
		return;
	}
	for (size_t i = 0; i < 10; i++)
	{
		number[index] = i + '0';
		No17Print1ToNCore(number, length, index + 1);
	}
}

void No16to21LogicIntegrity::No17Print1ToN(int n) {
	if (n <= 0)
		return;
	char* numbers = new char[n + 1];
	numbers[n] = '\0';
	No17Print1ToNCore(numbers, n, 0);
	cout << endl;
	delete[] numbers;

}

void No16to21LogicIntegrity::No21ReorderOddEven(int* pData, int nLength, bool(*func)(int)) {
	if (pData == nullptr || nLength == 0)
		return;
	int* pStart = pData;
	int* pEnd = pData + nLength - 1;
	while (pStart < pEnd) {
		while (pStart < pEnd && !func(*pStart)) {
			pStart++;
		}
		while (pStart < pEnd && func(*pEnd)) {
			pEnd--;
		}
		if (pStart < pEnd) {
			int temp = *pStart;
			*pStart = *pEnd;
			*pEnd = temp;
		}
	}
}

bool No16to21LogicIntegrity::No21ReorderOddEvenFunc(int n) {
	return n & 1 == 0;
}

bool No21ReorderOddEvenFunc(int n) {
	return (n & 0x1) == 0;
}

