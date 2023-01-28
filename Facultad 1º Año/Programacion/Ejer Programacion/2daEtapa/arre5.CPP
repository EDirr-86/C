#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>

//Realizar un algoritmo que genere un arreglo de 200 elementos que contenga
//los 200 primeros múltiplos de un número N ingresado por teclado.

long a[200],i,n,suma=0;

void main()
{
 cout<<"Ingrese el numero deseado: ";
 cin>>n;

 for(i=0;i<199;i++)
 	{  
	 suma=suma+n;
	 a[i]=suma;

	 cout<<a[i]<<"\t";  
	}
}