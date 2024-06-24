#include <iostream>
using namespace std;

double suma(int a);
int factorial(int b);

    int main(){
        int n;
        double s;
        cout<<"Ingrese la cantidad de terminos: ";
        cin>>n;
        s=suma(n);
        cout<<s<<endl;
        return 0;
    }

//Funcion para calcular la suma de una sumatoria
    double suma(int a){
        double sum=0.0;
        for( int i=1; i<=a;i++){
            sum=sum+ factorial(i)/(2.0*i);
        }
        return sum;
    }

//Funcion para hallar el factorial de un numero
    int factorial(int b){
        int f=1;
        for(int i=2;i<=b;i++){
            f=f*i;
        }
        return f;
    }
