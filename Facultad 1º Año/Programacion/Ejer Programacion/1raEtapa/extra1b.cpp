#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Calcular el producto de N pares numeros en forma de suma consecutiva (a*b)=a la suma de a tantas veces b

long cont=0,a,b,n,contS,suma;

void main ()

{
cout<<"ingrese N pares de numeros a calcular: ";
cin>>n;

do
  {
   contS=0;
   suma=0;
   
   cout<<"\n\ningrese 1er numero: ";
   cin>>a;
   cout<<"\ningrese 2do numero: ";
   cin>>b;

   do
     {
      suma=suma+a;
      contS++;
      }
   while(contS<b);

   cout<<"\nel de resultado del producto de (a*b) en forma de suma es: "<<suma;
   cont++;
  }
while (cont<n);

getche();

}