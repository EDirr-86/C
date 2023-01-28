#include<conio.h>
#include<stdio.h>
#include<iostream.h>

//Leer desde teclado un arreglo de 10 elementos y escribir en pantalla el promedio de sus elementos.

long a[10],i,suma=0,pro;

void main()
{
 for(i=0;i<9;i++)
 	{  
	 cout<<"\nIngrese un numero: ";
	 cin>>a[i];

	 suma=suma+a[i];
        }
 clrscr();
 pro=suma/10;
 cout<<"El promedio es de: "<<pro;
}