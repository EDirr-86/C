#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>

//Genera un matriz bidimencional y muestra sus diagonales 

long a[100][100],n,i,j,suma=0;
int b;

void main ()
{
 randomize();

 cout<<"Ingrese diametro de la matriz: ";
 cin>>n;

 cout<<"Ingrese con que quiere mostrar la diagonal: ";
 cin>>b;

 getche();
 clrscr();
 for(i=0;i<n;i++)
	{
	 for(j=0;j<n;j++)
		{
		 a[i][j]=random(10);

		 if(i==j)
			a[i][j]=b;

		 suma=i+j;
		 if(suma==(n-1))
                 	a[i][j]=b;

		 cout<<a[i][j]<<"  ";

		}
                cout<<"\n";
        }


}