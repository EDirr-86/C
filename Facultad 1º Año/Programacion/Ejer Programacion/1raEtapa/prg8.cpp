#include <iostream.h>
#include <conio.h>
#include <stdio.h>

//De los datos de los empleados de un fabrica que son legajo, nombre, edad y antiguedad. Informar cuantos empleados
//son mayores 40 y mayores de 20 años de antiguedad. Mayores de 20 y menores de 10 años de antiguedad. Ingresar
//empleados hasta que el legajo sea = 0.

int legajo,edad,antig,cont40=0,cont20=0;
char nombre[20];

void main()
{

  do
   {
    cout<<"\ningrese numero de legajo: ";
    cin>>legajo;
    if(legajo!=0)
     {
    cout<<"\ningrese nombre: ";
    cin>>nombre;
    cout<<"\ningrese edad: ";
    cin>>edad;
    cout<<"\ningrese antiguedad: ";
    cin>>antig;

    if(edad>=40)
      {
      if (antig>20)
	 cont40++;
      }

    if (edad>20)
      {
       if(antig<10)
         cont20++;
      }
      }
    }

   while (legajo!=0);

   cout<<"\nLa cantidad de empleados mayor a 40 años con antiguedad mayor a 20 años es: "<<cont40;

   cout<<"\nLa cantidad de empleados mayor a 20 años con antiguedad menor a 10 años es: "<<cont20;
 }
