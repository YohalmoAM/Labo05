#include <iostream>
#include <math.h>

using namespace std;

int main(){

int h;
int m;
int s;

cout<<"Introduzca la hora: ";
cin>>h;

cout<<"Introduzca los minutos: ";
cin>>m;

cout<<"Introduzca los segundos: ";
cin>>s;

if ( h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59 )
{
    s++;
    if(s == 60)
    {
    s=0;

    m++;
    if(m == 60){

    m=0;s

    s++;

    if(h == 24){
    h=0;
}
    }
    }
    cout<<"La hora es : "<<h<<" : "<<m<<" : "<<s;
}
else{
    cout<<"La hora ingresada es invalida";}

    return 0;
}