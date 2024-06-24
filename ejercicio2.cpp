#include <iostream>
using namespace std;

void esPesi(int n1,int n2);

int main(){
    int n1,n2;

    cout<<"Ingrese dos numeros: \n";
    cin>>n1>>n2;

    //llamado a la funcion esPesi
    esPesi(n1,n2);
    return 0;
}

void esPesi(int n1, int n2){
    int c=0;  
    int i=1; //iterador 

    while(i<=n1 && i<=n2){
        if(n1%i==0 && n2%i==0){
        //si se cumple la condicion va acumulando la cantidad de divisores
            c=c+i; 
        }
        i=i+1; 
    }

    if(c>1){ //si tienen mas de un divisor en comun 
        cout<<"No son PESI";
    }else{
        cout<<"Son PESI";
    }
}