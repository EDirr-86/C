#include<conio.h>
#include<stdio.h>
#include<iostream.h>

//IDEM fb2primo, ademas si no es primo hacer una funcion llamada multiplo que muestre por pantalla
//los submultiplos y retornar cuantos submultiplos tiene en cuestion. Ademas debera informar
//cuantos numeros primos y cuanto no primos impares hay.

int primo(long a);
void multiplo(long a);

long a,cont,n,res,cont2=0,imp,contpimp=0,contNimp=0;

void main ()
{
cout<<"ingrese N cantida de numeros a comprobar: ";
cin>>n;

for(cont=0;cont<n;cont++)
	{
         cout<<"\n\nPresione cualquier tecla para continuar";
         getche();
         clrscr();
	 cout<<"Ingrese un numero: ";
 	 cin>>a;

	 res=primo(a);

	 if(res==1)
		{
		 cout<<"Si es primo ";
		 cont2=cont2+res;

		 imp=a/2;
		 imp=imp*2;

		 if(imp!=a)
                       {
			cout<<"y es impar "<<a;
			contpimp++;
                       }
		}
	 else
               {
		cout<<"No es primo ";
		imp=a/2;
		imp=imp*2;

		if(imp!=a)
                       {
			cout<<"y es impar "<<a;
			contNimp++;
		       }
		multiplo(a);
               }
         
	}
clrscr();
cout<<"\n\nEn esta serie han ingresado "<<cont2<<" numeros primos";
cout<<"\nLa cantidad de numeros primos impares ingresado es de: "<<contpimp;
cout<<"\nLa cantidad de numeros no primos impares ingresado es de: "<<contNimp;
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

void multiplo(long a)
{
 int res,cont,cont2=0;

 for(cont=a;cont!=0;cont--)
	{
	 res=a/cont;
	 res=res*cont;

	 if(res==a)
              {
	       cout<<"\n"<<cont;	
	       cont2++;
              }
	}
 cout<<"\nEl numero "<<a<<" tiene "<<cont2<<" multiplos ";
}