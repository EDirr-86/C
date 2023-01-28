#include<conio.h>
#include<stdio.h>
#include<iostream.h>

//Leer desde teclado un arreglo de 15 elementos y escribir en pantalla la suma de todos sus elementos

long a[15],i,suma=0;

void main()
{
 for(i=0;i<14;i++)
 	{  
    	 cout<<"\nIngrese un numero a sumar: ";
	 cin>>a[i];

	 suma=suma+a[i];
        }
 clrscr();
 cout<<"El resultado de la suma de los 15 numeros es de: "<<suma;
}