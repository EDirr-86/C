#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Ingresar N cantidad de numeros positivos, contar cuantos son pares y cuantos impares

long cont=0,contP=0,contI=0,n,a,cal;

void main ()

{

cout<<"ingresar cantidad de numeros positivos a ingresar ";
cin>>n;

do
  {
   cout<<"\ningrese un numero positivo: ";
   cin>>a;

   cal=a/2;
   cal=cal*2;

   if (a==cal)
      contP++;

   else
      contI++;

   cont++;

  }
while(cont<n);

cout<<"\nla cantidad de numeros pares ingresado es de: "<<contP;
cout<<"\nla cantidad de numeros impares ingresado es de: "<<contI;
getche();

}