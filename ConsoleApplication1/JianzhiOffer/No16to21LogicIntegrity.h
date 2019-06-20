#ifndef NO16TO21LOGICINTEGRITY_H
#define NO16TO21LOGICINTEGRITY_H

class No16to21LogicIntegrity {
public:
	double No16PowerWithUnsignedExponent(double base, unsigned int exponent);
public:
	void No17PrintNumbers(char* number);
	void No17Print1ToNCore(char* number, int length, int index);
	void No17Print1ToN(int n);
public:
	void No21ReorderOddEven(int* pData, int nLength, bool(*func)(int));
	bool No21ReorderOddEvenFunc(int n);

};

extern bool No21ReorderOddEvenFunc(int n);

#endif // !NO16TO21LOGICINTEGRITY_H

