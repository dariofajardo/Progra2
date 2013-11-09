#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
/* \
Ingresar el nombre del empleado, el turno y las ventas.
Validar que el turno solo sea 1,2,3(usar un procedimiento)

Calcular usando procdimiento, la comision ganada, el ihss y total a pagar
1=5%
2=3%
3=6%

Presentar los datos calculados usando un prodicimiento.
 */

char nombre[30];
int turno,ventas,ihss,comision,tp;


void ingreso(char nombre[],int &turno,int &ventas)

{
    cout<<"Ingresar el nombre del empleado..: ";
    cin.getline
    (nombre,30);

    do

    {cout<<"Ingresar el turno = " ;
    cin>>turno;
    }while(!((turno>=1) and (turno<=3)));

    cout<<"Ingresar las ventas " ;
    cin>>ventas;
}
void calcular(int ihss,int comision, int &tp)
{
   if (turno==1)
   {
        comision=0.05*ventas;
   }
   else if (turno==2)
    {
       comision=0.03*ventas;
    }
    else
    {
        comision=0.06*ventas;
    }

    if (ventas>7000)
    {
        ihss=245;
    }

     else
    {
      ihss=0.035*ventas;
    }

    tp=comision-ihss;
}



void presentar(int tp)
{
    cout<<"El pago final es =  "<<tp<<"\n";


}
int main()
{
ingreso(nombre,turno,ventas);
calcular(comision,ihss,tp);
presentar(tp);

    return 0;
}
