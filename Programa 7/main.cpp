/* Ingresar el alumno, la nota acumulada y examen, deteterminar la nota final y ajustarla a
60 si esta entre 57 y 59
 */
#include <iostream>

using namespace std;

int main()
{ char nombre[30];
int na,ne,nf;
cout<< "Nombre del alumno ...>" ;
cin.getline(nombre,30);

cout<< "Nota acumulada...>";
cin>> na;

cout<< "Nota examen...>";
cin>> ne;


nf= na + ne;

if((nf>=57)and (nf<60))
{
    nf=60;
}
 cout<<"Nota final es...."<<nf<<"\n";






    return 0;
}
