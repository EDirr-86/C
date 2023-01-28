#include<iostream.h>
#include<conio.h>
#include<stdio.h>

//En una encuesta se tomaron los siguientes datos sobre 100 encuestados; edad, sexo y estado civil. Diseñar
//un algoritmo que diga cuantos hombres mayores de 21 año hay y cuantas mujeres solteras hay

int n,EcivilM,EdadH,contHmayores=0,contMsol=0,sexo,cont=0;

void main ()

{
cout<<"\ningrese cantida de encuestados: ";
cin>>n;

do
  {
   cout<<"ingrese sexo: 1=Hombre 2=Mujer ";
   cin>>sexo;
   if (sexo==1)
      {
       cout<<"ingrese edad: ";
       cin>>EdadH;
      }
       if (EdadH>=21)
      	   contHmayores++;

   else
       {
        cout<<"ingrese estado civil: 1=soltera 2=casada ";
	cin>>EcivilM;
       }
	if (EcivilM==1)
	       contMsol++;

   cont++;
  }
while (cont<n);

cout<<"la cantidad de hombres mayores a 21 es: "<<contHmayores;
cout<<"\n la cantida de mujeres solteras es: "<<contMsol;

}     