#include<stdio.h>
#include<iostream.h>
#include<conio.h>

//Escribir una funci�n para calcular la suma de dos n�meros. 
//Escribir un programa que ingrese por teclado tres n�meros y use la funci�n 
//para calcular la suma de los tres.

long suma(long a,long b);
long suma2(long d, long c);

void main()

{
int n1,n2,n3,res,resF;

cout<<"ingrese primer numero: ";
cin>>n1;
cout<<"\ningrese segundo numero: ";
cin>>n2;
cout<<"\ningrese tercer numero: ";
cin>>n3;

res=suma(n1,n2);
resF=suma2(res,n3);

cout<<"\nEl resultado es: "<<resF;
}

long suma(long a,long b)
{
 int d;
 d=a+b;
 
 return d;
}

long suma2(long d,long c)
{
 int z;
 z=d+c;

 return z,
}