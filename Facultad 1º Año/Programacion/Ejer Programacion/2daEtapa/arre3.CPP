#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>

//Leer desde teclado un arreglo de 18 elementos y escribir en pantalla el valor del mayor elemento del arreglo.

long a[18],i,b=0;

void main()
{
 randomize();
 for(i=0;i<17;i++)
 	{  
	 a[i]=random(100);
         cout<<"\t"<<a[i];

         if(a[i]>b)
         	b=a[i];
	}
  cout<<"\n\nEl mayor nuemro ingresado es "<<b;
}