#include<iostream.h>
#include<conio.h>
#include<stdio.h>

//Las pontencias de 2 son 1,2,4,8,16,32,64... Para obtener la siguiente potencia de 2 se multiplica la anterior
//por 2. Diseñar un algoritmo que muestre la 1ra potencia de 2 que sobrepase el numero 1000, indicando cual es el valor
//y cual el exponente al que se eleva a 2 para obtenerlo 

long a=1,b=2,c,exp;

void main ()

{
do
  {
   c=a*b;
   a=c;
   exp++;
  } 
while (c<1000);

cout<<"\nel primer nuemro que supera 1000 es: "<<c;
cout<<"\npara llegar a ese resulta a 2 se lo elevo al: "<<exp;
getche();

}     