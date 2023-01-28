#include<iostream.h>
#include<stdio.h>
#include<conio.h>

long n,suma,cont;

void main ()

{
 cout<<"ingrese n veces a imprimir la serie de 1 a 20 ";
 cin>>n;

 for (cont=0;cont<n;cont++)
	{
	 for (suma=1;suma<=20;suma++)
		{
		 cout<<suma<<"\t";
		}
	}
}