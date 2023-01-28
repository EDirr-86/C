#include<stdio.h>
#include<iostream.h>
#include<conio.h>

//Escribir una función que tenga un argumento de tipo entero y que devuelva 
//la letra ‘P’ si el número es positivo y la letra ‘N’ si el número es negativo. 
//Escribir un programa que use la función

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