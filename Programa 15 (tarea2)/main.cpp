#include <iostream>

using namespace std;

int main()
{ int num,cifra,suma,mcifra,mncifra,contador,numcifra,promedio,sumcifra,cifrapar,cifraimpar;
cout<<"Ingresar el numero  = ";
cin>>num;
promedio=0;
suma=0;
mcifra=0;
mncifra=9;
contador=0;
sumcifra=0;
cifrapar=0;
cifraimpar=0;
cout<<"Numero al revez  = ";
while (num>0)

{
cifra= num%10;
    cout<<cifra;
    num=num/10;

suma+=cifra;
if (cifra>mcifra)


        mcifra=cifra;


    if (cifra<mncifra)


        mncifra=cifra;
contador+=cifra;
sumcifra++;

if (cifra%2==0)

{
    cifrapar++;
}
else
{
    cifraimpar++;
}
}

promedio=contador/sumcifra;
cout<<"\n";

cout<<"Suma de la cifra = "<<suma<<"\n";
cout<<"Cifra mayor = "<<mcifra<<"\n";
cout<<"Cifra menor = "<<mncifra<<"\n";
cout<<"Promedio = "<<promedio<<"\n";
cout<<"Cifras Pares = "<<cifrapar<<"\n";
cout<<"Cifras Impares = "<<cifraimpar<<"\n";
    return 0;


}
