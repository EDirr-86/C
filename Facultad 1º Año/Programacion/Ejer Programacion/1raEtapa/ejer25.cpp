#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Ingresar N cantidad de numeros, si son pares elevarlos al cuadrado y sumarlos

long cal,cont=0,n,a,suma=0;

void main ()

{

cout<<"ingresar N cantidad de numeros ";
cin>>n;

do
  {
   cout<<"\ningrese un numero: ";
   cin>>a;

   cal=a/2;
   cal=cal*2;

   if (a==cal)
      {
       a=a*a;
       suma=suma+a;
      }
   
   cont++;

  }
while(cont<n);

cout<<"\nla suma de los numeros pares elevados al cuadrado es de: "<<suma;
getche();

}