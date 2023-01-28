#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Diseñar un algoritmo para calcular la suma de N primeros numeros naturales; donde N e snumero entero ingresado por teclado 

int suma=0,cont=0,n,a;

void main ()

{
 cout<<"ingrese N cantidad de numeros a sumar: ";
 cin>>n;

 do
   {
    cout<<"\ningrese un numero: ";
    cin>>a;
    suma=suma+a;
    cont++;
   }
 while (cont<n);
cout<<"\nla suma de N numeros es: "<<suma;
getche();
}