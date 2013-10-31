#include <iostream>

using namespace std;
/* Ingresar la base y el exponenete y determinar la potencia usando el ciclo for.
 */

int main()
{
 int base,exponente,potencia;
 base=0;
 exponente=0;
 potencia=1;
cout<<"Ingresar la base  = " ;
    cin>>base;

    cout<<"Ingresar el exponente  = " ;
    cin>>exponente;


 for(int i=0;i<exponente;i++)
 {



potencia*=base;
 }


    cout<<"La potencia del numero es  = "<<potencia<<"\n";
    return 0;
}
