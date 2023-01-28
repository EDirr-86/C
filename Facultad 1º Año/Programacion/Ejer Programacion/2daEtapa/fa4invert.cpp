#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Escriba unprograma que ingrese N numeros. Hacer una funcion que devuelva el numero invertido
//Ej.: del 159 devolvera el 951

long cifra(long a);
long pot(long a);
void invertir(long a,long res4);

int a,cif,cont;

void main()
{
 cout<<"ingrese numero a invertir: ";
 cin>>a;

 cont=cifra(a);
 cif=pot(cont);

 invertir(a,cif);
}

long cifra(long a)
{
 int cont=0,res,res2,res3;

 do
   {
    res=a/10;
    res2=res*10;
    res3=a-res2;
    a=res;
    cont++;
   }
 while(a>=10);
 return cont;
}

long pot(long a)
{
 int x=1,cont;

 for(cont=1;cont<=a;cont++)
	{
	 x=x*10;
	}
 return x;
}

void invertir(long a,long res4)
{
 long res,res2,res3,res5,res6=0;

 do
   {
    res=a/10;
    res2=res*10;
    res3=a-res2;
    a=res;

    res5=res3*res4;
    res6=res6+res5;
    res4=res4/10;
        
   }
 while(a>0);

 cout<<res6;
}