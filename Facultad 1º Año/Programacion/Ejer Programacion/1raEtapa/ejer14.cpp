#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Diseñar un algoritmo para calcular el cociente entero y el resto de divir 2 numeros naturales A y B, con A mayor o igual
//que B. El proceso finalizara cuando B sea mayor que A

int a,b,cociente,calex,resto;

void main ()

{

 do
   {
    cout<<"\n\ningrese 1er numero: ";
    cin>>a;
    cout<<"\ningrese 2do numero: ";
    cin>>b;

    if (a>b)
      {
       cociente=a/b;
       calex=b*cociente;
       resto=a-calex;
       cout<<"\nel cociente entero es: "<<cociente;
       cout<<"\nel resto es: "<<resto;
      }

   }

 while (b>a);

 
 getche();
}