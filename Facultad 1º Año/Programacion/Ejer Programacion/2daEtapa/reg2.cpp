#include<conio.h>
#include<stdio.h>
#include<iostream.h>

//Para realizar una cierta gesti�n de materiales se desea tomar conocimiento del n�mero de piezas en existencia
//de cada material y actualizar este dato cada vez que una pieza entra � sale. La informaci�n que se tiene
//de cada pieza es la siguiente :
//                               C�digo de identificaci�n de la pieza
//                               Nombre de la pieza
//                               Cantidad de piezas en existencia
//                               Cantidad de piezas compradas
//                               Cantidad de piezas vendidas
//Desarrollar un algoritmo que liste el nombre de cada pieza, como as� tambi�n el n�mero de unidades en
//existencia y un mensaje indicando si la existencia ha aumentado � disminuido. El campo
//Cantidad de piezas en existencia se debe actualizar con la informaci�n contenida en los campos de
//piezas compradas y vendidas. Una vez realizada esta operaci�n estos dos �ltimos campos se pondr�n a cero.
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

