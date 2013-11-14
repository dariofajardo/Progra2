#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



using namespace std;

int numero,sumacifra;




int suma_cifra(int numero)
{ int sumacifra;

   while (numero>0)
{numero=numero/10;
sumacifra++;
} return sumacifra;
}




int main()


{    for(int i=0;i<5;i++)
{


 do
        {cout<<"Ingresar el numero = " ;
    cin>>numero;
 }while(!(((numero % 2)==0) or ((numero%5)==0)));

sumacifra= suma_cifra(numero);
cout<<"La s uma de las cifras es =  "<<sumacifra<<"\n";
} return 0;
}








