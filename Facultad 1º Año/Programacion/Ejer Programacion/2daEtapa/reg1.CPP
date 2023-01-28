#include<conio.h>
#include<stdio.h>
#include<iostream.h>

//Una librería mantiene una lista de hasta 20 pedidos de libros que no posee al momento de la venta.
//La información de cada pedido consiste del título del libro (80 caracteres), su precio, y la persona que lo pidió.
//A su vez, los datos de cada persona consisten en : El nombre del solicitante y su dirección.
//Usar variables compuestas para describir un libro pedido, con su información asociada

struct libreria
{
 char titulo[40],nombre[40],direccion[40];
 long numero;
 float precio;
};
libreria pedido[20];

long i,opc;

void main()
{
 for(i=0;i<20;i++)
	{
      	 cout<<"\tRegistre su pedido";

	 cout<<"\nIngrese nombre del libro a solicitar: ";
	 gets(pedido[i].titulo); //para que tome el espacio ebntre nombres

	 cout<<"\nIngrese precio del libro a solicitado: ";
	 cin>>pedido[i].precio;

	 cout<<"\nIngrese su nombre: ";
	 gets(pedido[i].nombre);

	 cout<<"\nIngrese su direccion: ";
	 gets(pedido[i].direccion);

	 cout<<"\tNº: ";
         cin>>pedido[i].numero;
	 getche();
	 clrscr();  
	}
 clrscr();
 for(i=0;i<20;i++)
        {
         cout<<"                Pedido Registrado                  ";
	 cout<<"\nNombre del libro: "<<pedido[i].titulo<<"    Valor: $ "<<pedido[i].precio;
	 cout<<"\n\nNombre del solicitante: "<<pedido[i].nombre;
	 cout<<"\nDirecion: "<<pedido[i].direccion<<"\tNº: "<<pedido[i].numero;

       	 getche();
	 clrscr();
        }
}

