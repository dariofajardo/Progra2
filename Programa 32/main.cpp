#include <iostream>

using namespace std;
const int lin=6;
const int col=3;
int num[lin][col];


/* Se tienen 3 columnas con 6 lineas,, se necesesita dejar la ultima linea para el promedio de cada una
de las columnas.
Elaborar el ingreso,promedio de columnas y presentar arreglo completo. */

void ingreso(int num[lin][col])
{


    for (int l=0;l<lin-1;l++)

    {
        for (int c=0;c<col;c++)
        {
            cout<<"Ingresar dato ["<<l<<","<<c<<"]..";
            cin>>num[l][c];
        }
    }


}
void promedio(int num[lin][col])
{
    for (int c=0;c<col;c++)

    {int suma=0;

        for (int l=0;l<lin-1;l++)
        {
            suma+=num[l][c];
            num[lin-1][c]=suma / 5;
        }
    }



}
void presentar(int num[lin][col])
           {for (int l=0;l<lin;l++)

       {
                 for (int c=0;c<col;c++)
        {

            cout<<num[l][c]<<" ";

        }cout<<"\n";
             }
           }



int main()


{
ingreso(num);
promedio(num);
presentar(num);
}

/* Se tienen 3 columnas con 6 lineas,, se necesesita dejar la ultima linea para el promedio de cada una
de las columnas.
Elaborar el ingreso,promedio de columnas y presentar arreglo completo.
 */
