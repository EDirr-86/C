#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Ingresando 10 numeros por teclado, encontrar y mostrar el mayor de los numeros

int a,mayor=0,cont=0;

void main ()

{

do
  {
   cout<<"\ningrese un numero: ";
   cin>>a;

   if (a>mayor)
       mayor=a;

   cont++;

  }
while(cont<10);

cout<<"\nel mayor numero ingresado es: "<<mayor;

getche();

}