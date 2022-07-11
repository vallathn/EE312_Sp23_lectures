#include <stdio.h>

// return the string starting from the first occurence of val
char* rindex1 (char str[], char val) {
    if (*str == 0) { return str; }
    char* x = rindex1(str + 1, val); // goes to the end of the array so *x == 0
	// x = pointer to the null at the end of str
    if ( *x==0 && *str == val) { return str; }
    
    return x; // x == 0 until told otherwise
}

int length(char str[]) {
	if (*str == 0) return 0;
	return 1 + length(str + 1);
}

char* rindex3(char* str, char val, int index) {
	if (index == 0) return 0;
	if (str[index-1] == val) return str + index - 1;
	return rindex3(str, val, index - 1);
}

char* rindex2(char str[], char val) {
	return rindex3(str, val, length(str));
}

char* rindex4 (char* str, char val) {
	char* max1; char* max2;
	max1 = max2 = 0; // max1 is latest index so far
					// max2 is index of char in remaining string
    if (*str == 0) 
		return 0;
	if (*str == val)
		max1 = str;
	max2 = rindex4(str + 1, val);
	if (max2 > max1)
		return max2;
	return max1;
}

int main (void) {
	char* rtnVal;
	{
        char str [] = "Hello Good Morning World How Are You Doing?";
        char* str1 = str;
        char val = 'g';
        rtnVal = rindex4(str1, val);
	    printf("%p %ld \n", rtnVal, rtnVal - str1);
	}

	{
        char str [] = "Helloo";
        char* str1 = str;
        char val = 'o';
        rtnVal = rindex4(str1, val);
	    printf("%p %ld \n", rtnVal, rtnVal - str1);
	}

	{
        char str [] = "Helloo";
        char* str1 = str;
        char val = 'H';
        rtnVal = rindex4(str1, val);
	    printf("%p %ld \n", rtnVal, rtnVal - str1);
	}

	{
        char str [] = "Helloo";
        char* str1 = str;
        char val = 'X';
        rtnVal = rindex4(str1, val);
	    printf("%p %ld \n", rtnVal, rtnVal - str1);
	}

    return 0;
}
