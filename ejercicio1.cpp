#include <iostream>
using namespace std;

int main(){
    int op1,op2,r;
    char op;
    cin >> op1 >> op >> op2;
    switch (op)
    {
    case '+':
        r = op1 + op2;
        break;
    case '-':
        r = op1 - op2;
        break;
    case '*': 
        r= op1 * op2;
        break;
    case '/':
        r= op1 / op2;
        break;
    }
    cout<<r;
    return 0;
}