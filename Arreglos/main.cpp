#include <iostream>

using namespace std;
const int tam=4;
int num[tam];
int mayor,menor,promedio,pares;

void ingreso(int num[])
{
    for (int i=0;i<=tam;i++)
    {
        cout<<"Ingresar un numero["<<i<<"]...:" ;
        cin>>num[i];
    }

}

int promedioArreglo(int num[])
{int suma=0;
    for (int i=0;i<=tam;i++)
    {
        suma+=num[i];

    }
    return suma/tam;
}

int mayorArreglo(int num[])
{ int maxi=num[0];
    for (int i=0;i<=tam;i++)
    {
       if (num[i]>maxi)
       {
           maxi=num[i];
       }

    }
    return maxi;
}


int menorArreglo(int num[])
{ int menorx=num[0];
    for (int i=0;i<=tam;i++)
    {
       if (num[i]<menorx)
       {
           menorx=num[i];
       }

    }
    return menorx;
}


int paresArreglo(int num[])
{ int pares=0;

    for (int i=0;i<=tam;i++)
    {
       if((num[i] % 2)==0)
       {
           pares++;
       }

    }
    return pares;
}





int main()
{
   ingreso(num);
   promedio=promedioArreglo(num);
   mayor=mayorArreglo(num);
   menor=menorArreglo(num);
   pares=paresArreglo(num);


    cout<<"Promedio del areglo..:"<<promedio<<"\n";
    cout<<"Numero Mayor..:"<<mayor<<"\n";
    cout<<"Numero menor..:"<<menor<<"\n";
       cout<<"Numeros pares..:"<<pares<<"\n";
}
