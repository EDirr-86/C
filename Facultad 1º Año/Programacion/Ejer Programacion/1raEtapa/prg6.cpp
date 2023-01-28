#include<iostream.h>
#include<conio.h>
#include<stdio.h>

//Donde se ingresa un numero entero que sera el limite de una secuencia donde cada elemento es la suma de los 2 anteriores,
//siendo el 1er y el 2do numero de la serie sera menor o igual al numero limited ingresado. El programa debera ir
//mostrando los elementos de la serie; 1,1,2,3,5,8,13...

long n,a=1,b=1,c;

void main ()

{
cout<<"\ningrese el limete de la suma: ";
cin>>n;

do
  {
   c=a+b;
   a=b;
   b=c;
   if(c<n)
      cout<<c<<",";
  }
while (c<n);

getche();

}     