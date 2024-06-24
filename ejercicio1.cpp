#include <iostream>
using namespace std;

int main(){
    int op1,op2,r;
    char op; 

    //op1 y op2 los dos numeros a ingresar

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
        if(op2!= 0){
           r=op1 / op2;  
        }else{
          cout<<"Solucion indeterminada \n";
          return 1;
        }
        break;
     default:
        cout<<"Operador invalido \n";
        return 1;
    }
    cout<< r;
    return 0;
}