#include <iostream>

using namespace std;
/*
Ingresar un numero y determinar si es positivo o negativo

*/
int main()
{int numero ;
cout<< "Ingresar un numero...>" ;
cin>> numero ;

if (numero>0)
    { cout<<"El numero es positivo"<<"\n";
}
else if (numero<0)
   {
       cout<<"El numero es negativo"<<"\n";
}
else

    {
        cout<<"El numero es cero"<<"\n";
}
    return 0;

}
