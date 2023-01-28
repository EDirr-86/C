#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<math.h>

//Si el cuadrado de un numero es igual a la suma de los numeros impares del numero, cree
//una funcion que calcule el cuadrado de un numero mediante la suma sucesiva de los numeros
//impares

long a;
long cuadrado(long a);

void main()
{
 cout<<"Ingrese el numero para averiguar su cuadrado: ";
 cin>>a;

 cout<<cuadrado(a);

 getche();
}

long cuadrado(long a)
{
 long cont,res,suma=0,cont2=0;

 for(cont=1;cont2!=a;cont++)
	{
	 res=cont/2;
	 res=res*2;

	 if(res!=cont)
               {
		suma=suma+cont;
		cont2++;
               }
        }

return suma;
}