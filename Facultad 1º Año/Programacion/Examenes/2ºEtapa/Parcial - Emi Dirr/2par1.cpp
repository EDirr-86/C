#include<conio.h>
#include<stdio.h>
#include<iostream.h>

//Hacer una función que devuelva la superficie de un triángulo (Base*Altura/2).
//En el programa principal, se deberá ingresar una serie de 5 pares de números que serían
//la base y altura del triángulo, mostrar la superficie de cada par y al final mostrar la suma de todas las superficies

long superficie(long base,long altura);
long bas,alt,sup,con,suma=0;

void main()
{
 for(con=1;con<=5;con++)
	{
	 cout<<"Superficie de un Triangulo";
         cout<<"\n--------------------------";
	 cout<<"\nIngrese la base del mismo: ";
	 cin>>bas;

	 cout<<"\nIngrese la altura del mismo: ";
	 cin>>alt;

	 sup=superficie(bas,alt);

         cout<<"\n\nLa superficie del triangulo es de: "<<sup;

	 suma=suma+sup;

	 cout<<"\n\n\tPresione cualquier tecla para continuar";
	 getche();
         clrscr();
	}
 cout<<"La suma de todas las superficies es de: "<<suma;
}

long superficie(long base,long altura)
{
 long res;

 res=(base*altura)/2;

 return res;
}