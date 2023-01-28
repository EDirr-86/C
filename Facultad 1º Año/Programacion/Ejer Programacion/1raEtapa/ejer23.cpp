#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Ingresar el valor de N mercaderia, a las que tengan costos mayores de $ 1350 agregarles el 15% y
//a las menores o iguales a $135 agregarles el 20%.
//Mostrar el valor total de toda la mercaderia.

long cont=0,suma=0,n,a;

void main ()

{

cout<<"ingrese la cantida de mercaderia a tasar ";
cin>>n;

do
  {
   cout<<"\ningrese el valor de la mercaderia: ";
   cin>>a;
   
   if (a>135)
      a=a+(15*a/100);

   else
      a=a+(20*a/100);

   suma=suma+a;
   cont++;

  }
while(cont<n);

cout<<"\nla suma total de las mercaderias vendida es de: "<<suma;
getche();

}