#include <iostream>
using namespace std;

bool isSuperString(char* str, char* sstr, int str_ind, int sstr_ind);
bool isSuperString(char* str, char* supstr_candidate) {
    return isSuperString(str, supstr_candidate, 0, 0);
}

bool isSuperString(char* str, char* sstr, int str_ind, int sstr_ind) {
    bool b; // return value
    if (sstr[sstr_ind] == 0)
        return str[str_ind] == 0;
    if (str[str_ind] == 0)
        return true;
    if (str[str_ind] == sstr[sstr_ind])
        return isSuperString(str, sstr, str_ind + 1, sstr_ind + 1);
    else
        return isSuperString (str, sstr, 0, sstr_ind);
}
int main() {
    bool b;
    b = isSuperString("Hi", "HHimbo");
    cout << b << endl;
    b = isSuperString("Himbo", "Himb");
    cout << b << endl;
    b = isSuperString("Hi", "Hi");
    cout << b << endl;

    return 0;
}
