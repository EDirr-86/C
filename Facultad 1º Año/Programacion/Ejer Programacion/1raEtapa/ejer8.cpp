#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Diseñar un algoritmo para calcular el cociente entero y el resto de dividir 2 numeros naturales A y B, con A mayor o igual que B 

int a,b,cociente,resto,calex;

void main ()

{
 do
   {
    cout<<"\ningrese un numero: ";
    cin>>a;

    cout<<"\ningrese un numero: ";
    cin>>b;
   }
 while (a<b);

cociente=a/b;

calex=cociente*b;

resto=a-calex;

cout<<"\nel cociente es: "<<cociente;
cout<<"\nel resto es: "<<resto;
 getche();
}