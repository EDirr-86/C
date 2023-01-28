#include<conio.h>
#include<stdio.h>
#include<iostream.h>

//Realizar un algoritmo que cargue un arreglo de 20 elementos que contiene la estatura
//de los alumnos de una clase, se debe calcular  y mostrar la altura media del
//curso e indicar cuantos superan la media y cuantos hay mas bajos que la media.

double a[21],i,suma=0,pro;
long contm=0,contme=0;

void main()
{
 for(i=1;i<=20;i++)
	{
         cout<<"Alumno numero: "<<i;
         cout<<"\nIngrese su estatura: ";
	 cin>>a[i];	 	 
         suma=suma+a[i];
        }

 pro=suma/20;

 for(i=1;i<=20;i++)
 	{
	 if(a[i]>pro)
		contm++;
	 else
		contme++;
	}

 cout.precision(2);
 cout<<"\nLa estatura promedio es de: "<<pro;
 cout<<"\nLa cantidad de alumnos que superan la estatura promedio son: "<<contm;
 cout<<"\nLa cantidad de alumnos que no superan la estatura promedio son: "<<contme;
}
