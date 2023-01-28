#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>

//A partir de dos números leídos P y Q, construir y escribir un arreglo tal que sus
//elementos sean sucesivamente :
//P,    Q,    P + Q,    Q + (P+Q),    P + Q + (Q + (P+Q))  , ...
//y así sucesivamente hasta que el elemento del arreglo sea mayor que un número leido M


long a[10000],i,n,b=1,c=0,res;

void main()
{
 randomize();

 cout<<"Ingrese un numero limite: ";
 cin>>n;

 for(i=0;res<n;i++)
	{
	 res=c+b;
	 c=b;
	 b=res;

	 a[i]=res;

	 if(res<n)
	 	cout<<a[i]<<"\t";	 	              
        }
}
