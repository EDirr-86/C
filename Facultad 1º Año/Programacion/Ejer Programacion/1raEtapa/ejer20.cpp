#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Ingresando 10 numeros por teclado, encontrar el mayor ingresado y su posicion. Al final mostrar estos dos resultados
//en la pantalla


int mayor=0,cont=0,pos,a;

void main ()

{

do
  {
   cout<<"\ningrese un numero: ";
   cin>>a;
   cont++;

   if (a>mayor)
      {
       mayor=a;
       pos=cont;
      }
  }
while(cont<10);

cout<<"\nel mayor numero ingresado es: "<<mayor;
cout<<"\nla posicion que ingreso es: "<<pos;
getche();

}