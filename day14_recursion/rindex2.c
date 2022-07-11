#include <stdio.h>

char* rindex2(char str[], char val) {
    if(!*str) { return 0; }

    char* end = rindex2(str + 1, val);
    if(end == 0 && *str == val) { end = str; }

    return end;
}

int main (void) {
    char* rtnVal;
	{
        char str [] = "Hello Good Morning World How Are You Doing?";
        char* str1 = str;
        char val = 'g';
        rtnVal = rindex2(str1, val);
	    printf("%p %ld \n", rtnVal, rtnVal - str1);
	}


	{
        char str [] = "Hello Good Morning World How Are You Doing?";
        char* str1 = str;
        char val = 'x';
        rtnVal = rindex2(str1, val);
	    printf("%p %ld \n", rtnVal, rtnVal - str1);
	}

	{
        char str [] = "Hello Good Morning World How Are You Doing?";
        char* str1 = str;
        char val = 'H';
        rtnVal = rindex2(str1, val);
	    printf("%p %ld \n", rtnVal, rtnVal - str1);
	}

    return 0;
}
