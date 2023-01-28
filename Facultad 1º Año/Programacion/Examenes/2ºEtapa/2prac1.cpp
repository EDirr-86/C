#include<conio.h>
#include<iostream.h>
#include<stdio.h>

//Ingresar una serie de numeros cuyo fin viene dado por un numero igual a cero. Hacer una funcion
//que calcule el factorial de dicho numero. Mostrar el resultado en el programa principal

long res,a;
long factorial(long a);

void main()
{
 do
   {
    cout<<"\nIngrese le numero deseado ";
    cin>>a;

    if(a!=0)
	{
	 res=factorial(a);
	 cout<<"El factorial de "<<a<<" es: "<<res;
	}
   }
 while(a!=0);
}

long factorial(long a)
{
 long res=1,b;

 for(b=a;b>1;b--)
	{
	 res=res*b;
	}

 return res;
}