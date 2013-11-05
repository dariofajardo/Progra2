# include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
/*
Ingresar el nombre del alumno, luego debemos pedir las tres notas parciales usando un ciclo
presentar el promedio y la nota mayor de los tres parciales.
Preguntar si desea continuar al final presentar el alumno con la mejor nota.
*/

int main()
{   char nombre[30];
    char resp;
    int nota, promedio, notamax, alumnomax, suma;
    char nombreMayor[30];


    alumnomax=0;


    do
    {
        cout << "Nombre del Alumno..";
        cin.getline(nombre,30);
        suma=0;
        notamax=0;
        for(int i=0; i<3;i++)
        {
            cout << "Ingresar el parcial.."<<i<<"...:";
            cin>>nota;
            suma+=nota;
             if (nota>=notamax)
                {
                 notamax=nota;
                }
        }
        promedio=suma/3;
        _flushall();
        if(alumnomax<promedio)
        {
            alumnomax=promedio;
            strcpy(nombreMayor,nombre);
        }
        cout<<"Promedio del alumno...:"<<promedio<<"\n";
        cout<<"Nota mayor es...:"<<notamax<<"\n";
_flushall();
        do
        {
            cout<<"Desea Continuar?";
            cin.get(resp);
            _flushall();
        }while ((resp!='N') and (resp!='S'));
        _flushall();
    }while (resp!='N');
    cout<<"Nombre del alumno con la mejor nota..:"<<nombreMayor;
    cout<<"Con la nota..:"<<alumnomax<<"\n";

    return 0;
}
