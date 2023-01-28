#include<conio.h>
#include<stdio.h>
#include<iostream.h>

//Mostrar los multiplos de 3 comprendidos entre el 1 y el 20

long a[21],i,mul;

void main()
{
 cout<<"Los multiplos de 3, que se comprenden entre 1 y 20 son: \n";

 for(i=1;i<21;i++)
	{

	 a[i]=i;

	 mul=a[i]/3;
	 mul=mul*3;

	 if(mul==a[i])
         	cout<<a[i]<<"\t";
         
	}
 }