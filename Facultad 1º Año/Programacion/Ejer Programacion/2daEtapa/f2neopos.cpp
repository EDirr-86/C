#include<stdio.h>
#include<iostream.h>
#include<conio.h>

//Escribir una funci�n que tenga un argumento de tipo entero y que devuelva 
//la letra �P� si el n�mero es positivo y la letra �N� si el n�mero es negativo. 
//Escribir un programa que use la funci�n

char neOpos(int a);

void main()

{
int n;

cout<<"ingrese primer numero: ";
cin>>n;

cout<<neOpos(n);
}

char neOpos(int a)
{
 if(a>0)
	return 'P';
 else
 	return 'N';
}