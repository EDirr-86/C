#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

//Ingresar desde teclado letras en un arreglo de caracteres hasta ingresar el símbolo ':'.
//Mostrar en pantalla cuántas vocales hay en ese conjunto de letras.

char a[1000];
long contv=0,i;

void main()
{
 cout<<"Ingrese letras al azar esto finalizara cuando se ingrese el caracter ':'";
 getche();
 clrscr();

 for(i=1;a[i-1]!=':';i++)
	{
	 cout<<"Ingrese un caracter: ";
         cin>>a[i];
	 
	 if(a[i]=='a')
		contv++;
	 else
		{
		 if(a[i]=='e')
			contv++;
		 else
                       {
			if(a[i]=='i')
				contv++;
			else
				{
				 if(a[i]=='o')
					contv++;
				 else
                                 	{
					 if(a[i]=='u')
						contv++;
					}
				}
		       }
		}
        }

 cout<<"\nSe ingresaron "<<contv<<" vocal/es";
}

