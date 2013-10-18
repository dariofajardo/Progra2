#include <iostream>
/* Se tiene que ingresar la nota del alumno y el programa debera de presentar la observacion usando la siguiente tabla :
1-59 reprobado
60-80 bueno
81-90 muy bueno
91-100 sobresaliente

usar condiciones donde apliquemos el and
*/
using namespace std;

int main()
{
  int nota;
cout << "Ingresar la nota del alumno:  ";
    cin >> nota;

    if ((nota>=0) and (nota<=59))
        {
            cout<<"Reprobado"<<"\n";
    }
    else if ((nota>=60) and (nota<=80))
      {
          cout <<"Bueno"<<"\n";
       }

       else if ((nota>=81) and (nota<=90))

        {
       cout <<"Muy Bueno"<<"\n";
       }
       else if ((nota>=91) and (nota<=100))
        {
        cout <<"Sobresaliente"<<"\n";
        }

        else
        {
            cout<<"Nota Incorrecta"<<"\n";

        }
    return 0;
}
