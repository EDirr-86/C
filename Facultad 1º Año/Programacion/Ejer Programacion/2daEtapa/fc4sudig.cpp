#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Se ingresa n numeros mostrar la suma de sus digitos

long sudigito(long a);

long a;

void main()
{
 cout<<"Ingrese numero para sumar sus digitos: ";
 cin>>a;

 cout<<sudigito(a);
 
}

long sudigito(long a)
{
 long suma=0,res,res2,res3;

 do
   {
    res=a/10;
    res2=res*10;
    res3=a-res2;

    a=res;
    
    suma=suma+res3;
   }
 while(a>0);
 return suma;
}

