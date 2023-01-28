#include<stdio.h>
#include<iostream.h>
#include<conio.h>

//Realizar el problema del cálculo de la suma de los N primeros números usando 
//una función. El programa principal deberá leer N hasta que se ingrese un 0. 
//Hacer la función usando argumentos

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