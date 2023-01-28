#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Ingresar el sueldo de N empleados, sumarlos sacar el promedio, y mostrar el mayo de ellos


int mayor=0,cont=0,suma=0,a,pro,n;

void main ()

{

cout<<"ingresar cantida de empleados ";
cin>>n;

do
  {
   cout<<"\ningrese sueldo: ";
   cin>>a;
   
   if (a>mayor)
      {
       mayor=a;
      }
   suma=suma+a;
   cont++;

  }
while(cont<n);

pro=suma/n;

cout<<"\nla suma d elos sueldos es: "<<suma;
cout<<"\nel sueldo promedio es: "<<pro;
cout<<"\nel mayor sueldo a cobrar es de: "<<mayor;

getche();

}