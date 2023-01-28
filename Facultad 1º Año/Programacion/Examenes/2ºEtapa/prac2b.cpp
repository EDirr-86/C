#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Dada una matriz de 4x4 elementos, ingresar un 8 a los elementos de la
//diagonal principal. Mostrar resultados

long a[4][4],i,j;

void main()
{
 randomize();

 for(i=0;i<4;i++)
	{
	 for(j=0;j<4;j++)
		{
		 a[i][j]=random(1);
		 if(i==0)
                       {
			if(j==0)
				a[i][j]=8;
		       }
		 if(i==1)
			{
			 if(j==1)
				a[i][j]=8;
			}
		 if(i==2)
			{
			 if(j==2)
				a[i][j]=8;
			}
		 if(i==3)
			{
			 if(j==3)
				a[i][j]=8;
                        }
                                 
		 cout<<a[i][j]<<"\t";
		}
         cout<<"\n";
	}
}
		  