#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Ingresar por teclado un número entero A y un número N. Se pide calcular el número B que resulta de hacer
//el siguiente cálculo :  B = A + A2 + A3 + ... + AN
//En el algoritmo solo se puede sumar y multiplicar, no se puede elevar a una potencia

long elevar(long a, long b);
long c[1000],i,bas,exp,suma=0,res;

void main()
{
 cout<<"Ingrese numero base: ";
 cin>>bas;
 cout<<"Ingrese hasta que exponente desea saber y luego sumarlo: ";
 cin>>exp;

 for(i=1;i<=exp;i++)
	{
	 res=elevar(bas,i);
	 c[i]=res;
	 cout<<"\n"<<bas<<" elevado a la "<<i<<" es igual a: "<<c[i];
	 suma=suma+c[i];
	}
 cout<<"\nLa suma de todas las pontencia es: "<<suma;
}

long elevar(long a,long b)
{
 long res=1,cont=0;

 do
   {
    res=res*a;
    cont++;
   }
 while(cont<b);

 return res;
}

