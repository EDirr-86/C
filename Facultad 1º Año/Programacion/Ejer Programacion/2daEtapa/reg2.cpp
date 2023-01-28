#include<conio.h>
#include<stdio.h>
#include<iostream.h>

//Para realizar una cierta gestión de materiales se desea tomar conocimiento del número de piezas en existencia
//de cada material y actualizar este dato cada vez que una pieza entra ó sale. La información que se tiene
//de cada pieza es la siguiente :
//                               Código de identificación de la pieza
//                               Nombre de la pieza
//                               Cantidad de piezas en existencia
//                               Cantidad de piezas compradas
//                               Cantidad de piezas vendidas
//Desarrollar un algoritmo que liste el nombre de cada pieza, como así también el número de unidades en
//existencia y un mensaje indicando si la existencia ha aumentado ó disminuido. El campo
//Cantidad de piezas en existencia se debe actualizar con la información contenida en los campos de
//piezas compradas y vendidas. Una vez realizada esta operación estos dos últimos campos se pondrán a cero.
//El fin de la entrada de datos se indica con un cero en el primer campo.

struct materiales
{
 long codigo,compra,venta,actual;
 char nombre[80];
};
materiales lista[100];

long i=0,aux,aux2,piezas;

void main()
{
 cout<<"\nIngrese codigo del material: ";
 cin>>lista[i].codigo;

 while(lista[i].codigo!=0)
	{
      	 cout<<"\tBase de datos de los mataeriales";

	 cout<<"\nIngrese el nombre del material: ";
	 gets(lista[i].nombre);

	 cout<<"\nIngrese la cantidad del material en stock: ";
	 cin>>lista[i].actual;

	 cout<<"\nIngrese cantidad de piezas compradas: ";
         cin>>lista[i].compra;

	 cout<<"\nIngrese cantidad de piezas vendidas: ";
	 cin>>lista[i].venta;

         i++;
         aux=i;
	 getche();

	 cout<<"\nIngrese codigo del material: ";
	 cin>>lista[i].codigo;

	 clrscr();  
	}
 clrscr();
 for(i=0;i<aux;i++)
        {
         aux2=lista[i].actual;
	 lista[i].actual=lista[i].actual+lista[i].compra;
	 lista[i].compra=0;
	 lista[i].actual=lista[i].actual-lista[i].venta;
	 lista[i].venta=0;

	 piezas=lista[i].actual-aux2;

	 if(aux2>lista[i].actual)
                
		 cout<<"El/La "<<lista[i].nombre<<"ha disminuido en "<<piezas<<" pieza/s";
		
	 else
	       cout<<"El/La "<<lista[i].nombre<<"ha aumentado en "<<piezas<<" pieza/s";
               
       	 getche();
	 clrscr();
        }
}

