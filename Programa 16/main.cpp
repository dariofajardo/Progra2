#include <iostream>
/* Ingresar 10 numeros  \ al final presentar cuantos numeros fueron divisibles entre 5,
el promedio de los divisibles entre 5 y el numero mayor de todos los numeros
 */

using namespace std;

int main()
{ int numero,numdiv5,prom5,nummayor,contador,suma5;
numero=0;
numdiv5=0;
suma5=0;
prom5=0;
nummayor=0;
contador=0;

while (contador<10)

{
 cout<<"Ingresar el numero = " ;
    cin>>numero;

    if (numero%5==0)

    {
        suma5+=numero;
        numdiv5++;
    }

        if (numero>nummayor)
        {
            nummayor=numero;
        }



contador++;

}

prom5=suma5/numdiv5;

cout<<"\n";

cout<<"Los numeros divisibles entre 5 = "<<numdiv5<<"\n";
cout<<"El promedio de los numeros divisibles entre 5 es = "<<prom5<<"\n";
cout<<"El numero mayor es  = "<<nummayor<<"\n";


    return 0;
}
