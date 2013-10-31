/** \
Ingresar el nombre del empleado, las horas trabajas, el turno,
luego determinar las horas normales que son las primeras 40 y las extras que son mayres a 40.
debera de obtener pago por hora usando el turno, luego un bono, el pago bruto que son la suma
de los pagos normales y extras.
ihss y total a pagar

turno pn  pe
1    100  130
2     135   140
3    140 150

bono si el emleado es de turno 1 y trabajo mas de 45 horas el bono es de 300 y sino es de 100

para calcular el seguro el pago bruto mayor a 7000 es 245 y
sino el pago bruto por 3.5%


 */
#include <iostream>

using namespace std;

int main()
 {char nombre [30];
  int horas,turno,horasn,extras,pxh,bono,pb,pn,ihss;



    cout << "Ingersar el nombre..  " ;
    cin.getline(nombre,30);

    cout<< " Ingresar las horas trabajadas...  " ;
    cin>> horas;

    cout <<"Ingresar el turno 1,2,3..  ";
    cin>> turno;



   if ((horas<=40) and (turno==1))

   {
     pn=100;
   }

 if ((horas<=40) and (turno==2))

    {
        pn=135;
    }

if ((horas<=40) and (turno==3))

    {
        pn=140;
    }

    if ((horas>40) and (turno==1))

   {
     pn=130;
   }

 if ((horas>40) and (turno==2))

    {
        pn=140;
    }

if ((horas>40) and (turno==3))

    {
        pn=150;
    }




{ if ((horas>=45) and (turno==1))

   {
     bono=300;
   }

   else

   {
       bono=100;

 }

if (pb>7000)
{
    ihss=245;

}

else

{
    ihss=0.0035 * pb;

}

pb=pn+bono-ihss;




cout<<"Pago  Normal o Extra si aplica "<<pn<<"\n";
cout<<"Bono "<<bono<<"\n";
cout<<"Seguro Social "<<ihss<<"\n";
cout<<"Pago Bruto "<<pb<<"\n";



}





    return 0;
}
