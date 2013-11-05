#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{ int numero,digitossuma,mayor,promedio,sumanum,contador,suma;
char respuesta;
digitossuma=0;
mayor=0;
promedio=0;
sumanum=0;
contador=0;

   do

   {
       do
       {
           cout<<"Ingresar un numero = ";
           cin>>numero;


       }while (!(((numero % 2)==0) and ((numero>0) and (numero<201))));
        _flushall();
  if (numero>mayor)
{
    mayor=numero;
}
  sumanum+=numero;

suma=0;

         while (numero>0)
         {
             suma= suma + (numero % 10);
             numero=numero/10;

         }

         cout << "La suma de los numeros es:" << suma << "\n";

            sumanum+=numero;
            contador++;









    promedio=sumanum/contador;




 _flushall();
do
{


    cout<<"Desar continuar? = ";
    cin.get(respuesta);
  _flushall();
  }while((respuesta!='N') and (respuesta!='S'));
}while (respuesta!='N');
 promedio=sumanum/contador;


   cout<<"El numero mayor es "<<mayor<<"\n";
   cout<<"El promedio de los numeros es "<<promedio<<"\n";



    return 0;
}
