#include <iostream>

using namespace std;
/*
Ingresar la nota acumulada y examen y luego calcular la nota final y la observacion

*/
int main()
{ int notaA,notaE,notaF;

    cout<< "Ingresar nota acumulada...:";
    cin>> notaA;

    cout<< "Ingresar nota acumulada...:";
    cin>> notaE;

    notaF=notaA + notaE ;

    if (notaF>60)
        {
         cout<<"Estado; Aprobado";
         }

         else
         {
         (cout<<"Estado: Reprobado";
          }
          cout<<"\n";


          )
    return 0;
}
