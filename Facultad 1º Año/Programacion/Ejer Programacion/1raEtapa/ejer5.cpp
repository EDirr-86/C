#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Encontrar el producto de los 10 números naturales

long prod=1,cont=1;

void main ()

{
 do
   {
    cont++;
    prod=prod*cont;
   }
 while (cont<10);
cout<<"\nel producto de los 10 numeros naturales es: "<<prod;
getche();
}