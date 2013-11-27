#include <iostream>

using namespace std;
const int lin=4;
const int col=3;
int num[lin][col];

/* Tenesmos  un arreglo de 4 lineas y 4 columnas pero solo vamos a ingresar valores en las tres
primeras columnas y la ultima la dejamos reservada para la suma de cada lineas*/

void ingreso(int num[lin][col])
{


    for (int l=0;l<lin;l++)

    {
        for (int c=0;c<col-1;c++)
        {
            cout<<"Ingresar dato ["<<","<<c<<"]..";
            cin>>num[l][c];
        }
    }


}
void sumarLineas(int num[lin][col])
{



    for (int l=0;l<lin;l++)

    { num[l][col-1]=0;
        for (int c=0;c<col-1;c++)
        {
            num[l][col-1]+= num[l][c];
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
sumarLineas(num);
presentar(num);
}

/* Se tienen 3 columnas con 6 lineas,, se necesesita dejar la ultima linea para el promedio de cada una
de las columnas.
Elaborar el ingreso,promedio de columnas y presentar arreglo completo.
 */
