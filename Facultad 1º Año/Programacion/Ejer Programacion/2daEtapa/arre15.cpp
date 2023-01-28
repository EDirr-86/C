#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>

//Dada una cadena de caracteres constituida solo por :
//Los dígitos 0 al 9 de a uno (no hay números de dos cifras)
//Los caracteres '+' , '-'
//El caracter final '='
//Formular un algoritmo que calcule el valor numérico de la expresión que representa la cadena, teniendo en cuenta que el primer caracter siempre es un signo '+' ó '-'.
//Ejemplo : 	Si la cadena es '+9+3-4-1=', el algoritmo debe dar 7.

char a[1000];
long i,suma=0,res;

void main()
{
 cout<<"\ningrese una operacion con suma y resta: ";
 cin>>a;

 for(i=1;a[i]!='=';i++)
	{
	 cout<<a[i];

	 res=i/2;
	 res=res*2;

	 if(i!=res)
               	{
	 	 if(a[(i-1)]=='-')
	 		suma=suma-(a[i]-'0');
	 	 else
			suma=suma+(a[i]-48);
		}
      	
	}
 cout<<a[i]; //para que muestre el signo =
 cout<<suma;
 
}
