#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>

//Se recibe un mensaje codificado formado solo por caracteres alfab�ticos en may�sculas.
//El fin del texto se indica con una barra ( '/' ). El proceso de codificaci�n consiste en reemplazar cada
//letra del texto por otra de acuerdo a un n�mero K, de forma que cada letra es reemplazada por la letra que ocupa el
//K-esimo lugar siguiente en el c�digo ASCII.
//Por ejemplo, si K es 3 :
//Mensaje codificado : 		'SURJUDPDFLRQ/'
//Mensaje a recuperar : 		'PROGRAMACION'

char a[1000];
long i,k;

void main()
{
 cout<<"\nIngrese mensaje a codificar: ";
 cin>>a;

 cout<<"\nIngrese K codigo: ";
 cin>>k;
 clrscr();
 for(i=0;a[i]!='/';i++)
	{
	 a[i]=a[i]+k;
         cout<<" ";
	 cout<<a[i];       	
	}
 
}
