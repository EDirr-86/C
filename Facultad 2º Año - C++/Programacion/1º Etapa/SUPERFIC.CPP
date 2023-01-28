#include<iostream.h>
#include<conio.h>
#include<stdio.h>

long base, alt, sup;

void main ()
{
cout<<"Ingrese la base de un triangulo: ";
cin>>base;

cout<<"\nIngrese la altura del triangulo: ";
cin>>alt;

sup= (base*alt)/2;

cout<<"\nLa superficie del triangulo es: "<<sup;


getch ();
}