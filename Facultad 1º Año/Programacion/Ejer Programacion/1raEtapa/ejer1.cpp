#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Ingrese tres n�meros por teclado, sumarlos, y mostrar el resultado en pantalla

int a,suma=0,cont=0;

void main ()
{
 do
   {
    cout<<"Ingrese un n�mero: ";
    cin>>a;
    suma=suma+a;
    cont++;
   }
 while (cont<3);
cout<<"\nEl resultado de la suma de los 3 numeros es: "<<suma;
getche();
}