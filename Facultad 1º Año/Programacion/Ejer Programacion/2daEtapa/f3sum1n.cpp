#include<stdio.h>
#include<iostream.h>
#include<conio.h>

//Realizar el problema del c�lculo de la suma de los N primeros n�meros usando 
//una funci�n. El programa principal deber� leer N hasta que se ingrese un 0. 
//Hacer la funci�n usando argumentos

long suma1rosNn(long a);

void main()

{
long n;

do
	{
	 cout<<"\nIngrese hasta que N numero desea sumar: ";
	 cin>>n;

	 if(n!=0)
		cout<<suma1rosNn(n);

	}
while (n!=0);

cout<<"\nEl programa a finalizado";
}

long suma1rosNn(long a)
{
 long b,res=0;
 for(b=1;b<=a;b++)
	{
	 res=res+b;
        }
 return res;
}