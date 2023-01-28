#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Dados 2 valores A y B, calcular A/B si A es mayor que B; si no calcular su producto 

int a,b,cociente,prod;

void main ()

{
 cout<<"\ningrese 1er numero: ";
 cin>>a;

 cout<<"\ningrese 2do numero: ";
 cin>>b;

 if (a>b)
     {
      cociente=a/b;
      cout<<"\nel resultado de la division es: "<<cociente;
     }
 else
     {
      prod=a*b;
      cout<<"\nel el resultado de la multiplicacion es: "<<prod;
     }

 getche();
}