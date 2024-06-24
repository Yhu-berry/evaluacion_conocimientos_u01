#include <iostream>
using namespace std;

double suma(int a);
int factorial(int b);

    int main(){
        int n;
        double sum;
        cin>>n;
        sum=suma(n);
        cout<<sum<<endl;
        return 0;
    }

    double suma(int a){
        double s=0.0;
        for( int i=1; i<=a;i++){
            s=s+ factorial(i)/(2.0*i);
        }
        return s;
    }

    int factorial(int b){
        int f=1;
        for(int i=2;i<=b;i++){
            f=f*i;
        }
        return f;
    }
