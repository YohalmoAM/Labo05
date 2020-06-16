#include <iostream>
#include <math.h>
#include <locale.h> //No funciona para incluir ñ
#include <wchar.h> //No funciona para incluir ñ

        using namespace std;

        int main(){
setlocale(LC_CTYPE,"Spanish");

int anio, aniosig, dia, diasig, mes, messig;

            cout<<"Ingrese el valor de dd: ";
            cin>>dia;
            cout<<"Ingrese el valor de m: ";
            cin>>mes;
            cout<<"Ingrese el valor de a: ";
            cin>>anio; 
if((dia == 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) || (dia == 29 && mes == 2) ||
 (dia == 28 && mes == 2 && ((anio % 4 != 0)|| (anio % 100) == 0) && (anio % 400) != 0) || dia == 31)
            {
                messig = mes + 1;
                diasig = 1;
            }
            else
            {
                diasig = dia + 1;
                messig = mes;
            }

            if (diasig == 1 && messig == 13)
            {
                messig = 1;
                aniosig = anio + 1;
            }
            else
                aniosig = anio;
            
        cout<<"La nueva fecha es: "<<diasig<<"/"<<messig<<"/"<<aniosig<<endl;

        if((anio %4 == 0 && anio%100 != 0)|| (anio &400 == 0))
        cout<<"La fecha ingresada es biciesta";
        else
        {
            cout<<"La fecha ingresada no es biciesta";
        }
        

        return 0;
        }