#include<conio.h>
#include<stdio.h>
#include<iostream.h>

//Escriba un programa que calcule el cuadrado de un numero mediante una funcion. El programa
//finaliza con un numero negativo o con el ingreso de 10 numeros

long cuadrado(int a);

int flag=0,a,b;

void main()
{
do
  {
cout<<"\nIngrese un nº ";
cin>>a;
	if(a<0)
	{
	 flag=11;
	}
	else
	{
	 b=cuadrado(a);
	 cout<<"El cuadrado de "<<a<<" es: "<<b;
	 flag++;
	}
  }
while(flag<10);
}
long cuadrado(int a)
{
int res;

res=a*a;
return res;
}