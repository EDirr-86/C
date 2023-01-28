#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>

//Escribir un algoritmo que permita sumar el número de elementos positivos y la cantidad
//de elementos negativos de un arreglo de 100 elementos

long a[100],i,res,suma=0,cont=0,b;

void main()
{
 randomize();

 for(i=0;i<=99;i++)
	{
	 a[i]=random(100);

         b=random(3);

	 if(b>1)
		a[i]=a[i]*-1;

	 cout<<a[i]<<"\t";
         	                  
	 if(a[i]>=0)
		suma=suma+a[i];
	 else
		cont++;
        }

 cout<<"La suma de los numeros positivos es: "<<suma<<"\n";
 cout<<"La cantidad de numeros negativos es de: "<<cont;


}
