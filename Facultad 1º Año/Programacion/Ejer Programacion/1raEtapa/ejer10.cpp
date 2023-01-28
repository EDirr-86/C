#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Diseñar un algoritmo que ingrese un valor K, luego debera ingresar 10 valores mas y debera
//mostrar por pantalla la cantidad, la suma y el promedio d elos numeros ingresado que sean
//mayores a K 

int a,k,mayor=0,sumaM=0,pro,cont=0;

void main ()

{
 cout<<"\ningrese el valor de K: ";
 cin>>k;

 do
   {
    cout<<"\ningrese un numero: ";
    cin>>a;

    if (a>k)
       {
	mayor++;
	sumaM=sumaM+a;
	pro=sumaM/mayor;
       }
    cont++;
   }
 while (cont<10);

 cout<<"\nla cant de numeros mayores a K es: "<<mayor;
 cout<<"\nla suma de los numeros mayores a k es: "<<sumaM;
 cout<<"\nel promedio de los numeros mayores a K es: "<<pro;

 getche();
}