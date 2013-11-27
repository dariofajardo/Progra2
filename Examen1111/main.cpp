#include <iostream>
/*-Ingresar la temperatura de todo un día en intervalos de 3 horas,
 a un arreglo de números enteros usando un procedimiento.
Luego deberá de obtener el promedio de todas las temperaturas usando una función.
Obtener cuantas temperaturas fueron mayores a 35 grados.
Obtener la temperatura mayor y menor usando un procedimiento.
Llamar los procedimientos y funciones y escribirlos en la pantalla.

 */

using namespace std;
const int tam=21;
int temperatura[tam];
int numeromayor,numeromenor;





void ingreso(int temperatura[])
{   for(int i=0;i<=tam;i++)
    { cout<<"Registre las 8 temperaturas del dia ["<<i<<"]..  = ";
      cin>>temperatura[i];
      i++;
      i++;
    }
}

int promedioTemp(int temperatura[])
{
    int suma=0;
   for(int i=0;i<=tam;i++)
   {
       suma+=temperatura[i];
       i++;
      i++;
   }

    return suma/8;
}

int mayores35(int temperatura[])
{
int contador=0;
   for(int i=0;i<=tam;i++)
   {
       if (temperatura[i]>35)
       {contador++;
       i++;
      i++;
   }
   }
    return contador;
}

void mayor(int temperatura[])
{ int i;

    for(int i=0;i<=tam;i++)
    {if (numeromayor<temperatura[i])
    {

        numeromayor = temperatura[i];
    }

}

}


void menor(int temperatura[])
{

    for(int i=0;i<=tam;i++)
    {if (numeromenor>temperatura[i])
    {

        numeromenor = temperatura[i];
    }

}

}


int main()
{
int promedio,mas35;
   ingreso(temperatura);
   promedio=promedioTemp(temperatura);
   mas35=mayores35(temperatura);
   mayor(temperatura);
   menor(temperatura);

cout<<"\n";
   cout<<"El promedio de las temperaturas es = "<<promedio<<"\n";
   cout<<"Temperaturas mayores que 35 = "<<mas35<<"\n";
  cout<<"Temperatura mayor = "<<numeromayor<<"\n";
  cout<<"Temperatura menor = "<<numeromenor<<"\n";

    return 0;
}
