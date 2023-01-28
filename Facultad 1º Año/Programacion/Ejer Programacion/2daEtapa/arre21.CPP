#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

//Escribir un algoritmo que muestre una tabla (arreglo bidimensional) de factores de interés compuesto (F / A) , donde :
//				 
//En esta fórmula, F representa el valor futuro de una suma de dinero, A representa su valor actual, i representa
//la tasa de interés anual expresada como porcentaje y n representa el número de años. Hacer que cada fila de la
//tabla corresponda a un valor diferente de n, con n variando desde 1 hasta 30. Cada columna representará una tasa
//de interés diferente: 4%, 4.5%, 5%, 5.5%, .... hasta 10% anual (variando de a 0.5%).


float b[31][15],a,ints=4,i,j,n=1,f;

void main()
{
 cout<<"Ingrese dinero a depositas, para calcular su tasa anual";
 cin>>a;

 for(i=0;i<31;i++)
	{
         for(j=0;j<15;j++)
		{
                 f=pow((1+ints/100),n)*a;
		 b[i][j]=f;
		 ints=ints+0.5;
                 cout<<b[i][j] <<" ";
		}
	 cout<<"\n";
         n++;
	}    
 
}

