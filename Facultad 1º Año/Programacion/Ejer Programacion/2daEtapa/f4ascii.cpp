#include<stdio.h>
#include<iostream.h>
#include<conio.h>

//Escribir una funci�n de resultado l�gico, de nombre D�gito que determine si un caracter
//(que es su �nico argumento) es uno de los d�gitos del 0 al 9. Hacer un programa que use la funci�n

int digito(char a);

void main()

{
char a;
int res;

cout<<"ingrese cualquier caracter: ";
cin>>a;

res=digito(a);

if (res!=0)
	cout<<"el caracter ingresado esta entre 0 y 9, el numero ingresado es "<<a<<" y su codigo es "<<res;
else
	cout<<"el caracter ingresado no esta entre 0 y 9";
}

int digito(char a)
{
int z;

z=int (a);

if(z>=48)
	{
	 if(z<=57)
		return z;
	 else
		return 0;
	}
else
	return 0;	 
}