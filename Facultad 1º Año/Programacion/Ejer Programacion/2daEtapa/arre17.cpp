#include<conio.h>
#include<stdio.h>
#include<iostream.h>

//Desarrollar un algoritmo que calcule el salario de un grupo de 100 vendedores. El sueldo de cada uno de ellos se
//paga en base a una comisión sobre las ventas realizadas, siendo del 5%. Cada uno de los vendedores trabaja
//con 25 artículos. Los datos de entrada consisten en los tickets de cada venta, que contienen el código del vendedor,
//el código del artículo, el precio por unidad y la cantidad de unidades que se ha vendido de ese artículo.
//Terminar la entrada de datos cuando el ticket tenga un código de vendedor igual a 0.

long cod,codA,Pund,cant,aux;
float res,ress,suma=0,resf,cont=0,suma2;

void main()
{
 cout<<"Ingrese codigo de vendedor: ";
 cin>>cod;
 clrscr();
 while(cod!=0)
	{
	 do
           {
	    cout<<"Ingrese codigo del articulo: ";
            cin>>codA;

            cout<<"\nIngrese precio por unidad: ";
	    cin>>Pund;

	    cout<<"\nIngrese cantidad de unidades vendidas: ";
	    cin>>cant;

	    res=Pund*cant;
	    ress=res+(5*res/100);

	    suma=suma+ress;

	    cout<<"Dese a realizar otro ingresod e datos: 1-SI || 2-NO ";
	    cin>>aux;
            clrscr();
	   }
         while(aux!=2);
         cont++;
	 cout<<"Ingrese codigo de vendedor: ";
	 cin>>cod;
         clrscr();
	}

suma2=1200*cont;
resf=suma+suma2;

cout<<"La suma de los salarios de todos los empleados es de: "<<resf;
}
