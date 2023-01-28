#include<stdio.h>
#include<iostream.h>
#include<conio.h>

//Hacer un algoritmo que lea tres veces del teclado un caracter y un número N.
//Diseñar un procedimiento que escriba una línea formada por la repetición de ese caracter N veces.
//Por ejemplo, al ingresar 'Z' y 5 el procedimiento escribirá 'ZZZZZ'. El algoritmo debe comprobar
//que el número tecleado se encuentre entre 1 y 80

void cadena(char a, int b);

void main()

{
char a;
int n,cont;

for(cont=0;cont<3;cont++)
	{
         
	 cout<<"\ningrese el caracter deseado: ";
	 cin>>a;
	 cout<<"ingrese cantidad de veces a repetir: ";
	 cin>>n;

         clrscr();

	 if(n>=1)
               {
		if(n<=20)
			cadena(a,n);
	       }
        
        }

}

void cadena(char a,int b)
{
int x,y=1;

for(x=1;x<=b;x++)
		{
		 gotoxy(x,y);
		 cout<<a;
		}
     

}