#include<conio.h>
#include<stdio.h>
#include<iostream.h>

//Ingresar por teclado N numeros, hacer una funcion para saber si es primo, por ultimo informar
//cuantos primos se ingreso en la serie

int primo(long a);

long a,cont,n,res,cont2=0;

void main ()
{
cout<<"ingrese N cantida de numeros a comprobar: ";
cin>>n;

for(cont=0;cont<n;cont++)
	{
	 cout<<"\ningrese un numero: ";
 	 cin>>a;

	 res=primo(a);

	 if(res==1)
		{
		 cout<<"Si es primo";
		 cont2=cont2+res;
		}
	 else
		cout<<"No es primo";

	}
cout<<"\nEn esta serie han ingresado "<<cont2<<" numeros primos";

}

int primo(long a)
{
 int band,c,i;

 band=0;
 for (i=2;i<=(a/2);i++)
       {
        c=a/i;
        c=c*i;

        if (c==a)
	    band=1;
       }
   if (band!=0)
       return 0;
   else
       return 1;

}        
