#include<conio.h>
#include<iostream.h>
#include<stdio.h>

//Hacer un programa que ingrese 5 medidas de logintud en metros y muestre su conversion en pie y pulgada.
//Hacer 2 funciones para cada conversion.
//Donde: 1 pulgada = 2.54 cm, 1 pie = 30.8 cm.

long n,cont;
double a,res1,res2;
double pulgada(double a);
double pie(double a);

void main()
{
 cout<<"Ingrese N cantidad de medidas a convertir: ";
 cin>>n;

 for(cont=0;cont<n;cont++)
	{
	 cout<<"\nIngrese la medida en metros: ";
	 cin>>a;

	 res1=pulgada(a);
	 cout.precision(2);
	 cout<<"La medida ingresada en metros es de: "<<res1<<" pulgadas";

	 res2=pie(a);
	 cout.precision(2);
	 cout<<"\nLa medida ingresada en metros es de: "<<res2<<" pies\n";
        }
}

double pulgada(double a)
{
 double res;

 a=a*100;
 res=(a*1)/2.54;

 return res;
}

double pie(double a)
{
 double res;

 a=a*100;
 res=(a*1)/30.8;

 return res;
}