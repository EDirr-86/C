#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>

//Dado un arreglo numérico de 100 elementos, realizar un algoritmo que liste sus
//elementos en pantalla empezando por el último elemento hasta el elemento número 51 y
//luego liste la segunda parte del arreglo comenzando desde el elemento número 1 al 50.

long a[100],i;

void main()
{
 randomize();

 for(i=0;i<=99;i++)
	{
         a[i]=random(100);
         cout<<a[i]<<"\t";
        }

 cout<<"\n";

 for(i=99;i>=51;i--)
 	{
	 cout<<"\t"<<a[i];
	}

 cout<<"\n";
 cout<<"***************************************************************************";
 cout<<"\n";
 for(i=0;i<=50;i++)
 	{
	 cout<<"\t"<<a[i];
	}


}
