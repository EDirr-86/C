#include<conio.h>
#include<stdio.h>
#include<iostream.h>

//Realizar un algoritmo que acepte la hora del día en formato militar, y la muestre en la representación
//usual de horas:minutos y las palabras AM ó PM. La variable de entrada debe ser un número entero y la variable
//de salida un registro de tres campos (la hora, los minutos y AM/PM ). Por ejemplo :
//0845	--->	8:45 AM
//1522	--->	3:22 PM


struct horario         //El ejercicio funciona solo si no ingresas el cero al comienzo, al cero Lo toma como
{                      //convertor, comprobado con el profe
 long hmili,hora,min;
 char tiempo;
};
horario normal[100];

long i,opc,aux,aux2;

void main()
{

 for(i=0;opc!=2;i++)
   {
    aux=0;
    cout<<"Ingrese la hora en formato militar: ";
    cin>>normal[i].hmili;

    normal[i].hora=normal[i].hmili/100;
    aux=normal[i].hora*100;
    normal[i].min=normal[i].hmili-aux;

    if(normal[i].hora>12)
	{
	 normal[i].tiempo='P';
         if(normal[i].hora!=24)
		normal[i].hora=normal[i].hora-12;
	 else
               {
		normal[i].hora=0;
		normal[i].tiempo='A';
               }

        }
    else
	normal[i].tiempo='A';
   

   cout<<"\nDesea realizar otra conversion de hora:"<<"\t1-SI"<<"\t2-NO  ";
   cin>>opc;
   aux2=i;
   clrscr();
  }
 
 cout<<"Precione cualquier tecla para ver las conversiones";
 getche();
 clrscr();

 for(i=0;i<=aux2;i++)
        	{
		 cout<<"\n     Horario militar\t *   "<<normal[i].hmili;
                 cout<<"\n------------------------ * ---------";
		 cout<<"\nConversion a hora normal * ";
                 cout<<normal[i].hora<<" : "<<normal[i].min<<"  "<<normal[i].tiempo<<"M";
                 getche();
		}
 clrscr();
 cout<<"Gracias por utilizar nuestros progamas, que tenga buen dia";
}

