#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>

//Desarrollar un algoritmo que cargue un arreglo de 20 elementos y que luego calcule
//y muestre el promedio de los número pares y el mayor número impar.

long a[20],i,cont=0,sump=0,b=0,pos,res,pro;

void main()
{
 randomize();

 for(i=0;i<19;i++)
 	{  
	         
	 a[i]=random(100);

	 cout<<a[i]<<"\t";

	 res=a[i]/2;
	 res=res*2;

	 if(res==a[i])
		{
		 sump=sump+a[i];
		 cont++;
		}
	 else
		{
		 if(a[i]>b)
			{
			 b=a[i];
			 pos=i;
			}
		}
	}
 pro=sump/cont;

 cout.precision(2);
 cout<<"\nEl promedio de los numeros pares es "<<pro;
 cout<<"\nEl mayor numero impar es "<<b<<" y su posicion es "<<pos;
}