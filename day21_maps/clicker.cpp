#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

void clicker () {
    vector<int> vec;

    vec.push_back(3);
    vec.push_back('a');
    vec.push_back(4.3);
    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
    }
    cout << sum << endl;
}
int main () {
	clicker();
}
