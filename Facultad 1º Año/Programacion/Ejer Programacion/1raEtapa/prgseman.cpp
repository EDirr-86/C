#include<iostream.h>
#include<conio.h>
#include<stdio.h>

//Diseñar un algoritmo donde ingresamos un numero y que ese numero nos diga al dia de semana que corresponde

int a;

void main ()

{

do
  {
   cout<<"\n\ningres en numero un dia de la semana: ";
   cin>>a;
   if (a==1)
       cout<<"el numero que usted ingreso corresponde al dia domingo";

   if (a==2)
       cout<<"el numero que usted ingreso corresponde al dia lunes";

   if (a==3)
       cout<<"el numero que usted ingreso corresponde al dia martes";

   if (a==4)
       cout<<"el numero que usted ingreso corresponde al dia miercoles";

   if (a==5)
       cout<<"el numero que usted ingreso corresponde al dia jueves";

   if (a==6)
       cout<<"el numero que usted ingreso corresponde al dia viernes";

   if (a==7)
       cout<<"el numero que usted ingreso corresponde al dia sabado";

   if (a>7)
   cout<<"la semana no tiene "<<a<<" dias cuente bien los dias de la semana gracias";
   a=1;

  }

while (a<7);

getche();

}     