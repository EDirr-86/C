#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>

//Desarrollar un algoritmo que lea un arreglo A, que contiene N números enteros.
//Se pide construir otro arreglo ignorando los valores duplicados que se encuentren en A.
//Ejemplo : 	Si  A = (5,4,3,5,2,3)  el algoritmo debe dar (4,2).


long a[1000],b[1000],c[1000],i,n,y=0,flagg,m=0,aux;

void main()
{
 randomize();

 cout<<"Ingrese el limited del arreglo: ";
 cin>>n;

 for(i=0;i<n;i++)
	{
	 a[i]=random(10);	 	              
	 b[y]=a[i];
	 
	 cout<<a[i]<<"\t";
                   
         y++;
         
	}
 getche();

 for(i=0;i<n;i++)
	{
         flagg=0;
	 for(y=0;y<n;y++)
               {
                
		if(i!=y)
		  {
		   if(a[i]==b[y])
		     {
		      flagg=1;
		     }
		  }
               }

	 if(flagg!=1)
	   {
	    c[m]=a[i];
            
	    m++;
           }
	       
         aux=m;
        }

	 
cout<<"\n\nLos numeros que no se repiten son: ";

for(m=0;m<aux;m++)
	{
         cout<<c[m]<<"\t";
        }
}
