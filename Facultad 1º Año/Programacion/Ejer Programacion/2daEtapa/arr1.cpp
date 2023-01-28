#include<stdio.h>
#include<iostream.h>
#include<conio.h>

//Elaborar un programa que se ingresen 10 numeros por teclado a un arreglo
//A-sumar los 10 primeros numeros y sacar promedio
//B-calcular el mayor numero ingresado y el menor
//C-contar y mostrar los pares

long a[10],i,suma=0,promedio,menor,mayor,par=0,contp=0;

void main()
{
 for(i=0;i<10;i++)
	{
	 cout<<"ingrese un numero: ";
	 cin>>a[i];
	}
 clrscr();

 for(i=0;i<10;i++)
	{
	 cout<<a[i]<<"\t";
         suma=suma+a[i];
        }
 promedio=suma/10;
 cout<<"\nEl promedio de los numeros ingresado es de: "<<promedio;


 mayor=a[0];
 menor=a[0];

 cout<<"\n\nMayor y Menor numero ingresado";

 for(i=1;i<10;i++)
	{
	 if(a[i]>mayor)
		mayor=a[i];
	 else
		{
		 if(a[i]<menor)
			menor=a[i];
                }
	}
 cout<<"\nEl mayor numero ingresado es: "<<mayor;
 cout<<"\nEl menor numero ingresado es: "<<menor;



 cout<<"\n\nNumeros pares";
 for(i=0;i<10;i++)
 	{
	 par=a[i]/2;
	 par=par*2;

	 if(par==a[i])
         	{
                 cout<<"\t"<<par;
		 contp++;
		}
	}
 cout<<"\nLa cantidad de pares es de: "<<contp;
 }

