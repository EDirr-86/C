#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>

//Leer desde teclado un arreglo de 100 elementos y escribir en pantalla el valor y la posición del menor
//elemento del arreglo.

long a[100],i,b=100,cont=0,pos;

void main()
{
 randomize();
 for(i=0;i<99;i++)
 	{  
         cont++;
	 a[i]=random(100);
         cout<<"\t"<<a[i];

         if(a[i]<b)
               {
		b=a[i];
                pos=cont;
               }  
	}
  cout<<"\n\nEl menor nuemro ingresado es "<<b;
  cout<<"\nEn la pocision "<<pos;
}