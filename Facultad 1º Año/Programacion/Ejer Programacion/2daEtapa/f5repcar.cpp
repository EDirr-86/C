#include<stdio.h>
#include<iostream.h>
#include<conio.h>

//Hacer un algoritmo que lea tres veces del teclado un caracter y un n�mero N.
//Dise�ar un procedimiento que escriba una l�nea formada por la repetici�n de ese caracter N veces.
//Por ejemplo, al ingresar 'Z' y 5 el procedimiento escribir� 'ZZZZZ'. El algoritmo debe comprobar
//que el n�mero tecleado se encuentre entre 1 y 80

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