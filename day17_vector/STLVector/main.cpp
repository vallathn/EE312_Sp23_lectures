#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v1;
    for (int i = 0; i < 100; i++) {
        v1.push_back(i);
    }
    for (int i = 10; i < 20; i++)
        cout << v1[i] << " ";
    cout << endl;

    return 0;
}
