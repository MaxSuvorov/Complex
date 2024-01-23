#include <assert.h>
#include "Complex.h"
#include <iostream>

using namespace std;

void getValidPart() {
	Comp_number test(4.1, -7);

	assert(test.getReal() == 4.1);

	cout << "TestgetValidPart is OK" << endl;
}

void getImaginaryPart() {
	Comp_number test(4.1, -7);

	assert(test.getImaginary() == -7);

	cout << "TestgetImaginaryPart is OK" << endl;
}

void MethodSet() {
	Comp_number test(4.1, -7);

	test.setReal(7);
	test.setImaginary(91);

	assert(test.getReal() == 7);
	assert(test.getImaginary() == 91);

	cout << "TestMethodSet is OK" << endl;
}

void MethodModule() {
	Comp_number test(4, -3);

	assert(test.getMagnitude() == 5);

	cout << "TestMethodModule is OK" << endl;
}

void EqualityOperators()
{
	Comp_number test1(4.1, -7);
	Comp_number test2(4.1, -7);
	Comp_number test3(1, 5);

	assert(test1 == test2);
	assert(test1 != test3);
	assert(test2 != test3);

	cout << "TestEqualityOperators is OK" << endl;
}

void SumOperators() {
	Comp_number test1(4.1, -7);
	Comp_number test2(4.1, -7);

	Comp_number ans(8.2, -14);
	Comp_number sum = test1 + test2;

	assert(sum == ans);

	cout << "TestSumOperators is OK" << endl;

}

void SubtractionOperators() {
	Comp_number test1(4.1, -7);
	Comp_number test2(4.1, -7);

	Comp_number ans(0, 0);
	Comp_number Subtraction = test1 - test2;

	assert(Subtraction == ans);

	cout << "TestSubtractionOperators is OK" << endl;
}

void MultiplicationOperators() {
	Comp_number test1(4.1, -7);
	Comp_number test2(1, 5);

	Comp_number ans(39.1, 13.5);
	Comp_number multi = test1 * test2;

	assert(multi == ans);

	cout << "TestMultiplicationOperators is OK" << endl;
}

void DivisionOperators() {
	Comp_number test1(4.1, -7);
	Comp_number test2(4.1, -7);

	Comp_number division = test1 / test2;
	Comp_number ans(1, 0);

	assert(division == ans);

	cout << "TestDivisionOperators is OK" << endl;
}

void PowMethod() {
	Comp_number test1(2, 3);
	Comp_number ans(-46, 9);

	double exp = 3;

	assert(test1.comp_pow(exp) == ans);

	cout << "TestCompPowMethod is OK" << endl;
}


int main() {
	getValidPart();
	getImaginaryPart();
	MethodSet();
	MethodModule();
	EqualityOperators();
	SumOperators();
	SubtractionOperators();
	MultiplicationOperators();
	DivisionOperators();
	PowMethod();
	return 0;
}