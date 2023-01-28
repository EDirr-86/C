#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Comprobar si un numero N es par, escribiendo un mensaje en pantalla

int a,cal;

void main ()

{
 cout<<"\ningrese cualqueir numero: ";
 cin>>a;

 cal=a/2;
 cal=cal*2;

 if (a==cal)
     cout<<"el numero ingresado es par";
 else
     cout<<"el numero ingreso es impar";
  
 getche();
}