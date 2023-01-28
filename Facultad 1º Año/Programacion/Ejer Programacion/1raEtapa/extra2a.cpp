#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Calcular el cociente de 2 numeros en forma de resta consecutiva (a/b)

long a,b,contR;

void main ()

{
cout<<"\ningrese 1er numero: ";
cin>>a;
cout<<"\ningrese 2do numero: ";
cin>>b;

do
  {
   a=a-b;
   contR++;
  }
while(b<=a);

cout<<"\nel de resultado del cociente de (a/b) en forma de resta es: "<<contR;

getche();

}