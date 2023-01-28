#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Diseñar un algoritmo para calcular el producto de dos numeros naturales. el proceso finalizara cuando
//el producto de ambos numeros sea igual a 0

int a,b,prod;

void main ()

{

 do
   {
    cout<<"\n\ningrese 1er numero: ";
    cin>>a;
    cout<<"\ningrese 2do numero: ";
    cin>>b;

    prod=a*b;

    cout<<"\nel resultado de la multiplicacion de los dos numero es: "<<prod;
   }

 while (prod!=0);

 
 getche();
}