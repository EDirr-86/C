#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Ingresando 10 numeros por teclado, encontrar y mostrar el mayor y el menor de los mismo

int a,mayor=0,menor=0,cont=0;

void main ()

{
cout<<"ingrese un numero: ";
cin>>a;

mayor=a;
menor=a;

do
  {
   cout<<"\ningrese un numero: ";
   cin>>a;

   if (a>mayor)
       mayor=a;
   else
       {
	if(a<menor)
	   menor=a;
       }

   cont++;

  }
while(cont<10);

cout<<"\nel mayor numero ingresado es: "<<mayor;
cout<<"\nel menor numero ingresado es: "<<menor;
getche();

}