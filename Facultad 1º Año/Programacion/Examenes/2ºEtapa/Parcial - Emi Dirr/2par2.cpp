#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>

//Ingresar un arreglo A de 3x3 elementos, luego ingresar un nro por teclado, al final mostrar:
//*	Cantidad de nros menores que el ingresado
//*	Cantidad de nros mayores que el ingresado
//*	Cantidad de nros iguales al ingresado

long a[3][3],i,j,num,contig=0,contmay=0,contmen=0;

void main()
{
 randomize();

 for(i=0;i<3;i++)
	{
	 for(j=0;j<3;j++)
		{
		 a[i][j]=random(11);
		 cout<<a[i][j]<<"\t";
		}
	 cout<<"\n";
	}
 cout<<"\nSelecione un numero: ";
 cin>>num;

 for(i=0;i<3;i++)
	{
	 for(j=0;j<3;j++)
		{
		 if(a[i][j]==num)
			contig++;
		 else
			{
			 if(a[i][j]<num)
				contmen++;
			 else
				contmay++;
			}
                }
	}
 cout<<"\nNumeros iguales:  "<<contig;
 cout<<"\nNumeros mayores:  "<<contmay;
 cout<<"\nNumeros menores:  "<<contmen;

}