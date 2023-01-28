#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>

//Ingresar dos arreglos de 20 elementos por teclado, en un tercer arreglo colocar
//la suma  elemento por elemento de los dos primeros. (suma de vectores)

long a[20],i,b[20],c[20];

void main()
{
 randomize();

 for(i=0;i<19;i++)
	{
	 a[i]=random(100);
	 b[i]=random(100);

	 c[i]=a[i]+b[i];

	 cout<<"\nLa suma de "<<a[i]<<" + "<<b[i]<<" es igual a: "<<c[i];
        }

}