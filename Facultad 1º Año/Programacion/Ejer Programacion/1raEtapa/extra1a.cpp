#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Calcular el producto de 2 numeros en forma de suma consecutiva (a*b)=a la suma de a tantas veces b

long cont=0,a,b,suma=0;

void main ()

{

   cout<<"\ningrese 1er numero: ";
   cin>>a;
   cout<<"\ningrese 2do numero: ";
   cin>>b;
do
  {

   suma=suma+a;
   cont++;

  }
while(cont<b);

cout<<"\nel de resultado del producto de (a*b) en forma de suma es: "<<suma;
getche();

}