#include <iostream>
#include <math.h>

using namespace std;

int main(){

int a;
int b;
int q;
int r;

cout<<"Bienvenido a su programa para calcular el Maximo Comun Divisor"<<endl;
cout<<"Ingrese el primer numero:"<<endl;
cin>>a;
cout<<"Ingrese el segundo numero:"<<endl;
cin>>b;

q=a/b;
r=a%b;

while(r!=0){
    a=b;
    b=r;
    if(a>b){
    q=a/b;
    r=a%b;}
}

cout<<"El MCD de los numeros ingresados es: "<<b;

return 0;

}