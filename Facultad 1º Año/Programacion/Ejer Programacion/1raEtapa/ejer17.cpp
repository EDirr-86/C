#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Diseñar un algoritmo para calcular la suma de los siguientes numeros, 243, 248, 253, 258, 263,
//hasta el 288; siempre de 5 en 5

int a;

void main ()

{

cout<<"numeros a elegir 243, 248, 253, 258, 263: ";
cin>>a;

do
  {
   a=a+5;
   cout<<"\nsumando: "<<a;
  }
while(a!=288);

getche();

}