// pn.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

// split string and convert to a vector of tokens, each token being a substring
vector<string> split (string str) {
    string delimiter = " "; // separate based on space character
    size_t pos = 0;
    string token;
    vector<string> vout; // vector to be returned
    while ((pos = str.find(delimiter)) != string::npos) { // go until the end
        token = str.substr(0, pos);
        vout.push_back(token);
        str.erase(0, pos + delimiter.length());
    }
    vout.push_back(str);
    return vout;
}

// Helper function operates on the two operands arg1 and arg2, given
// the operator op.  (Only + and - allowed.) Returns the result of the
// operation op.
int operate(const string op, const int arg1, const int arg2) {
	if (op == "+") { return arg1 + arg2; }
	if (op == "-") { return arg1 - arg2; }
	exit(1);
}

// This is the primary method in this exercise.  Takes a vector of string
// expressions as the input.  Returns the evaluated expression.
// It is called recursively.

int parse(vector<string>& expr) {
	string first = expr[0]; // get first token in string; string first(expr[0]);
	expr.erase(expr.begin()); // remove it
							  // base case; if first token is a number (not operator), return the number
	if (first.compare("+") != 0 && first.compare("-") != 0) {
		return stoi(first);
	}

	//output * x y output - x y
    
	// else parse the two operands recursively
	int arg1 = parse(expr);
	int arg2 = parse(expr);
    // Call the operate function on the two arguments that we just got.
	return operate(first, arg1, arg2);
}

int main(void) {
	string s("45"); // just one number to parse, should be 45
	vector<string> vs;
	int result = 0;
	vs.push_back(s);
	result = parse(vs);
	cout << s << " = " << result << endl;

	string t("+ 10 7"); // should be 17.
	vector<string> vt ;
	vt.push_back("+");
	vt.push_back("10");
	vt.push_back("7");

	result = parse(vt);
	cout << t << " = " << result << endl;

	string u("- + 22 11 + 9 8"); // should be 16
	vector<string> vu = split(u);
	result = parse(vu);
	cout << u << " = " << result << endl;

    string s1("3 - 5");
    vector<string> vs1 = split(s1);
    result = parse(vs1);
    cout << s1 << " = " << result << endl;


	return 0;
}
