#include <iostream>

using namespace std;

int main()
{ int horas;
double pxh,salario,deduccion,tp;


    cout << "Ingresar las horas...>!" ;
    cin>> horas;

    cout << "Ingresar las horas...>!" ;
    cin>> salario;

    salario = horas * pxh;

    deduccion = salario * 0.05;

    tp = salario - deduccion ;

    cout<<"Salario "<<salario<<"\n";
    cout<<"Deduccion "<<deduccion<<"\n";
    cout<<"Total a pagar"<<tp<<"\n";


    return 0;
}
