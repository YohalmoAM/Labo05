#include <iostream>
#include <string>

using namespace std;

//Declarar Funcion BOOL
bool fech(int anio);

int main()
{
    int anio;
    bool ret;

cout<<"Bienvenido a su programa para calcular"<<endl;
cout<<"Porfavor Ingrese un numero: ";
cin>>anio;

ret = fech(anio);

if(ret==true){
    cout<<ret<<endl<<"El numero ingresado es bisiesto";
}
else
{
    cout<<ret<<endl<<"El numero ingresado no es bisiesto";
}
    return 0;
}

//Funcion BOOl
bool fech(int anio){
    if((anio %4 == 0 && anio%100 != 0)|| (anio &400 == 0))
return true;
else
{
    return  false;
}
return fech;
}