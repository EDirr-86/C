#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Calcular el promedio de cinco numeros naturales A,B,C,D y E 

int a,b,c,d,e,pro,suma;

void main ()

{
 cout<<"\ningrese 1er numero: ";
 cin>>a;

 cout<<"\ningrese 2do numero: ";
 cin>>b;

 cout<<"\ningrese 3er numero: ";
 cin>>c;

 cout<<"\ningrese 4to numero: ";
 cin>>d;

 cout<<"\ningrese 5to numero: ";
 cin>>e;

 suma=a+b+c+d+e;

 pro=suma/5;

 cout<<"\nel promedio de los 5 numeros naturales es: "<<pro;
 
 getche();
}