#include <iostream>

using namespace std;
/*
Ingresar la nota acumulada y examen y luego calcular la nota final y la observacion

*/
int main()
{ int notaA,notaE,notaF;

   cout<<"Ingresar la nota acumulada   ";
   cin>>notaA;


cout<<"Ingresar la nota de examen    ";
   cin>>notaE;

   notaF=notaA+notaE;


if (notaF>=60)

   {cout<<"Aprobado";
   }
else

    {cout<<"Reprobado";
    }


    return 0;
}
