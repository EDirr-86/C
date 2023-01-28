#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Cargar una matriz bidimencional de 4x4 y sumar sus fila e columnas y guardardas en un arreglo

long a[4][4],i,j,sumaf,sumac;

void main()
{
 randomize();

 for(i=0;i<4;i++)
	{
         sumaf=0;
	 for(j=0;j<4;j++)
		{
                 a[i][j]=random(10);
                 cout<<a[i][j]<<"   ";
                 sumaf=sumaf+a[i][j];
		}
         cout<<"=  "<<sumaf;
	 cout<<"\n";
        }    
 cout<<"=   =   =   =   *\n";
 for(j=0;j<4;j++)
	{
	 sumac=0;
	 for(i=0;i<4;i++)
		{
		 sumac=sumac+a[i][j];
		}

		cout<<sumac<<"  ";
        }
}

