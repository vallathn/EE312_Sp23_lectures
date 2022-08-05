#include <iostream>
#include <string>
using namespace std;

struct Str {
	string s;
};
int main () {
	string s1("");
	Str str1;
	str1.s = s1;
	cout << sizeof(str1) << endl;
	return 0;
}
