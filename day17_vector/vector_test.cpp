// vector_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Vector.h"

void vector_test(void) {
	Vector vec;
	//Vector fred = vec;
	Vector george(vec);

}

void swap_Cpp(int& x, int& y) {
	int t = x;
	x = y;
	y = t;
}
void swap_C(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	vector_test();

	int a = 3;
	int b = 5;
	swap_C(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	swap_Cpp(a, b);
	printf("a = %d, b = %d\n", a, b);

    return 0;
}

