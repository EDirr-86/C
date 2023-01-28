#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

//Ingresar desde teclado un arreglo de caracteres de 20 letras. Mostrar en pantalla cuantas veces aparece la letra 'A'.

char a[20],i;
long cont=0;

void main()
{
 cout<<"Ingrese un caracter en letras mayusculas no superior a 20 caracteres: \n\n";
 cin>>a;

 for(i=0;i<20;i++)
	{
	 if(a[i]==65)
		cont++;
	}
 cout<<"\nLa letra 'A' aparece "<<cont<<" ves/es";
}

