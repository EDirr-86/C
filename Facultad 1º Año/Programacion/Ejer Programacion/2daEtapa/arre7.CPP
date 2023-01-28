#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>

//Dados tres arreglos numéricos, A y B de 500 elementos y C de 1500 elementos,
//se pide listar los elementos de C cuyo orden sea el producto de elementos de
//A por B en orden de aparición. Se debe verificar que el producto no sea mayor
//que el índice de C.

long a[500],b[500],c[1500],i,y;

void main()
{
 randomize();

 for(y=0;y<1499;y++)
 	{  
	 c[y]=random(100);
	}

 for(i=0;i<499;i++)
	{
	 a[i]=random(100);
	 b[i]=random(100);

	 y=a[i]*b[i];
         
         
	 if(y<1499)
                cout<<"\n"<<c[y];
	 else
                cout<<"\nA superado el limited del indice";
         }
		        
	 
}