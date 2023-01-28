#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<string.h>

//Realizar un algoritmo que cargue tres arreglos de 15 elementos cada uno,
//que contengan el nombre, la edad y el peso respectivamente, luego mostrar
//el nombre del de mayor edad y el nombre del de menor peso

long a[15],i,d[15],mayor=0,menor=500;
char b[20],c[20],e[20];
void main()
{
 for(i=0;i<14;i++)
	{
	 cout<<"Ingresar nombre: ";
	 cin>>b;

	 cout<<"Ingrese su edad: ";
	 cin>>a[i];

	 if(a[i]>mayor)
		{
		 mayor=a[i];
		 strcpy(c,b);
		}

	 cout<<"Ingrese su peso: ";
	 cin>>d[i];

	 if(d[i]<menor)
		{
		 menor=d[i];
		 strcpy(e,b);
		}

        }
cout<<"\nEl mayor de edad es "<<c<<" con la edad de "<<mayor<<" años";
cout<<"\nLa persona de menor peso es "<<e<<" con un peso de "<<menor<<" Kgs";
	 
}