#include <iostream.h>
#include <conio.h>
#include <stdio.h>

//Suponiendo que el precio de cualquier articulo que se vende a un negocio es inferior o igual a $1, diseñar
//un algoritmo para leer el precio de un articulo vendido y calcular el numero de cada clase de moneda que 
//debe darse cuando se paga con un peso. El numero d emonedas debe ser el minimo 

int precio,vuelto,n,cont50=0,cont25=0,cont10=0,cont5=0,cont1=0,cont;

void main()
{
    cout<<"\ningrese n productos: ";
    cin>>n;

    for(cont=0;cont<n;cont++)
    {
     vuelto=0;
     cont50=0;
     cont25=0;
     cont10=0;
     cont5=0;
     cont1=0;



     cout<<"\n\ningrese precio en centavos: ";
     cin>>precio;

     vuelto=100-precio;

     if(vuelto>=50)
        {
	vuelto=vuelto-50;
	cont50++;
        }
     if(vuelto>=25)
        {
	vuelto=vuelto-25;
	cont25++;
        }
     while(vuelto>=10)
        {
	vuelto=vuelto-10;
	cont10++;
        }
     while(vuelto>=5)
        {
	vuelto=vuelto-5;
	cont5++;
        }
     while(vuelto>=1)
        {
	vuelto=vuelto-1;
	cont1++;
        }
     if(cont50>0)
       cout<<"\n"<<cont50<<" moneda de 50 centavos";
     if(cont25>0)
       cout<<"\n"<<cont25<<" moneda de 25 centavos";
     if(cont10>0)
       cout<<"\n"<<cont10<<" moneda de 10 centavos";
     if(cont5>0)
       cout<<"\n"<<cont5<<" moneda/s de 5 centavos";
     if(cont1>0)
       cout<<"\n"<<cont1<<" moneda/s de 1 centavos";
     }
}
