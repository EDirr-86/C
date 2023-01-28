#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Ingrese dos números por teclado, compararlos y mostrar el mayor en pantalla

int a,b;

void main ()
{
cout<<"ingrese un numero: ";
cin>>a;
cout<<"ingrese otro numero: ";
cin>>b;

if (a>b)
   cout<<"el numero mayor es: "<<a;
else
   cout<<"el numero mayor es: "<<b;
getche();
}