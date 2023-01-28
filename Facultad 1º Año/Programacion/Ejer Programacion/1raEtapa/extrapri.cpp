#include<iostream.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>

//Ingresar N numeros y comprobar si son primos o no, se sabe que un numero es primo cuando es divicible
//por el y por uno

long a,cont=0,n,c,i,band;

void main ()
{
cout<<"ingrese N cantida de numeros a comprobar: ";
cin>>n;

do
  {
   cout<<"\ningrese un numero: ";
   cin>>a;
   band=0;
   for (i=2;i<=(a/2);i++)
       {
        c=a/i;
        c=c*i;

        if (c==a)
	    band=1;
       }
   if (band!=0)
       cout<<"el numero "<<a<<" no es primo";
   else
       cout<<"el numero "<<a<<" es primo";

   cont++;
  }
while(cont<n);

getche();

}
