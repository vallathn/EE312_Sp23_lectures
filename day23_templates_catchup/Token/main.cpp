#include <iostream>
#include <vector>
#include <iostream>
using namespace std;

class Token {
public:
    char opcode;
    int operand;
    bool isOperator;
    Token (char op, int val, bool isOpCode) {
        opcode = op; operand = val; isOperator = isOpCode;
    }
};

int parse (vector<Token> v) {
    return 0;
}
int main() {

    vector<Token> v; // allocated on stack, BUT the elements are allocated on the heap
    Token* t1 = new Token('+', 0, true);
    Token* t2 = new Token(0, 5, false);
    Token* t3 = new Token(0, 5, false);
    v.push_back(*t1);
    v.push_back(*t2);
    v.push_back(*t3); // the vector v will look like {+, 5, 5}

    std::cout << parse (v) << std::endl;
    return 0;
}