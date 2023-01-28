#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

//Ingresar 10 numeros por teclado en un arreglo. Calcule y mustres el promedio
//y el mayor numero impar.

long a[10],i,suma=0,promedio,res,mayor=0;

void main()
{
 randomize();

 cout<<"Los numeros ingresados son: "<<"\n";

 for(i=0;i<10;i++)
	{
	 a[i]=random(20);
         cout<<a[i]<<" ";
	 suma=suma+a[i];

	 res=a[i]/2;
         res=res*2;
         
	 if(res!=a[i])
		{
		 if(res>mayor)
			mayor=a[i];
                }
	}
 cout<<"\n";
 promedio=suma/10;
 cout<<"El promedio de los numeros ingresados es de: "<<promedio<<"\n";
 cout<<"El mayor numero impar ingresado es: "<<mayor;
 
}
 