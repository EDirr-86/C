#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Calcular el area de N circulos; ingresando por pantalla el radio de los mismo, y sumarlas


long cont=0,suma=0,n,r,a,p=3;

void main ()

{

cout<<"ingresar cantidad de areas a calcular ";
cin>>n;

do
  {
   cout<<"\ningrese el radio: ";
   cin>>r;
   
   a=p*(r*r);
   cout<<"\nel area del circulo es de: "<<a;

   suma=suma+a;
   cont++;

  }
while(cont<n);

cout<<"\nla suma de todas las areas es: "<<suma;
getche();

}