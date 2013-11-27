#include <iostream>
/* Ingresar 5 numeros a un arreglo
Los numeros deberan de estar entre 50-100.

Usando una funcion debera de obtener la suma de los numeros divisibles
entre 5.

Crear una funcion para determinar el promedio de los numeros pares.

Crear un procedimiento para modificar el arreglo y colocar 0 a todos los numeros que son pares.

Creaer un procedimiento para presentar el arreglo.
 */
 using namespace std;
const int tam=4;
int arreglo[4];
int sumaA,suma5,promedio2;

void ingreso(int arreglo[])

{
    for (int i=0;i<=tam;i++)
    {
         do
    {


        cout<<"Ingresar un numero["<<i<<"]...:" ;
        cin>>arreglo[i];

    }while(!((arreglo[i]>=50) and (arreglo[i]<=100)));
}
}
int numerosdivisibles5(int arreglo[])
{ int suma=0;
for (int i=0;i<=tam;i++)
{
    if (arreglo[i]%5==0)
    {
        suma+=arreglo[i];
    }
}
return suma;
}

int numerosdivisibles2(int arreglo[])

{ int sumapar=0;
int contador=0;
for (int i=0;i<=tam;i++)
{
    if (arreglo[i]%2==0)
    {
      contador++;
      sumapar+=arreglo[i];
    }

}
return sumapar/contador;
}
void ceroPares(int arreglo[])
{
    for (int i=0;i<=tam;i++)
    {
        if (arreglo[i]%2==0)
        {
            arreglo[i]=0;
        }
    }
}


int main()

{ingreso(arreglo);
suma5=numerosdivisibles5(arreglo);
      promedio2=numerosdivisibles2(arreglo);
      ceroPares(arreglo);
       cout<<"\n";
    cout<<"Cambio de numeros pares a cero =  ";
    for (int a=0;a<=tam;a++)
    {
        cout<< arreglo[a] <<", ";
    }
       cout<<"\n";
    cout<<"Promedio de los pares..:"<<promedio2<<"\n";
     cout<<"La suma de los numeros divisibles entre 5 es..:"<<suma5<<"\n";
}
