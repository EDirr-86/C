#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Diseñar un algoritmo que nos permita  ingresar una serie de 20 numeros, mostrando al final la cantidad y promedio
//de los numeros pares y la suma de los mismos

int n=20,a,sumaImp=0,contPos=0,sumaPos=0,cont=0,prom,calex;

void main ()

{

do
   {

    cout<<"\ningrese un numero: ";
    cin>>a;
    
    calex=a/2;
    calex=calex*2;


    if (a==calex)
      {
       contPos++;
       sumaPos=sumaPos+a;
       prom=sumaPos/contPos;
      }
    else
       sumaImp=sumaImp+a;

cont++;       

   }

while (cont!=n);

cout<<"\nla cantida de numeros positivos ingresados es de: "<<contPos;
cout<<"\nel promedio de los numeros positivos es de: "<<prom;
cout<<"\nel resultado de la suma de los numeros impares ingresado es de: "<<sumaImp;

getche();

}