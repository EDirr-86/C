#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Calcular el cociente de N pares numeros en forma de resta consecutiva (a/b)

long cont=0,a,b,n,contR;

void main ()

{
cout<<"ingrese N pares de numeros a calcular: ";
cin>>n;

do
  {
   contR=0;
      
   cout<<"\n\ningrese 1er numero: ";
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
   cont++;
  }
while (cont<n);

getche();

}