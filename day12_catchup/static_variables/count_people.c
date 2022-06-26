#include <stdio.h>

int j = 0;
void foo() {
	static int i = 0;
	printf("%d ", ++i);
}

void bar() {
	printf("%d ", ++j);
}

int main () {
	int k;
	for (k = 0; k < 4; k++) {
		foo();
	}
	puts("");
	for (k = 0; k < 4; k++) {
		bar();
	}
	puts("");
}
