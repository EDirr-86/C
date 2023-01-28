#include<stdio.h>
#include<iostream.h>
#include<conio.h>

//Crear una funcion que cambie una cantidad de dias a su equivalente en horas

long a,b;
long horas(long a);

void main()
{
 cout<<"Ingrese cantidad de dias: ";
 cin>>a;

 cout<<horas(a)<<" horas es el equivalente de "<<a<<" dia/s ";

 getche();
}

long horas(long a)
{
 long res;

 res=a*24; 

}