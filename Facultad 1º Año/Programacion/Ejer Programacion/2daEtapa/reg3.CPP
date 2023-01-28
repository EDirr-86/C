#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>

//Los números usados en un código de identificación (por ejemplo, el de una tarjeta de crédito),
//se basan en una validación ó dígito de control. La técnica del dígito de control consiste en hacer coincidir
//el último dígito de cada número, con la suma de los dígitos anteriores módulo 9, es decir, con un dígito
//que es el resto de dividir la suma en 9.
//Se pide desarrollar un algoritmo que, al leer datos en los campos A, B y C;
//verifique la validez de los números contenidos en el primer y último campo, y liste todas las entradas
//que resulten erróneas. Los campos son :
//Campo A :  Número de la tarjeta (12 dígitos)
//Campo B :  Importe de la compra (menor que 9999.99 )
//Campo C :  Código del establecimiento (10 dígitos)

struct identificacion
{
 float precio;
 long local,verificacion;
 char tarjeta[12];
};
identificacion credito[100];

long i,opc,aux;

void main()
{
 randomize();
 for(i=0;opc!=2;i++)
   {
    cout<<"\tVenta con tarjeta de credito (verificacion)";

    cout<<"\nIngrese numero de la tarjeta: ";
    cin>>credito[i].tarjeta;

    cout<<"\nIngrese el importe de la compra: ";
    cin>>credito[i].precio;

    cout<<"\nIngrese codigo del local: ";
    cin>>credito[i].local;
       
    credito[i].verificacion=random(3);

    if(credito[i].verificacion>1)
        {cout.precision(2);
	cout<<"\nLa targeta a sido rechazada de vido que no alcanza a cubrir el monto de $ "<<credito[i].precio;}
    else
	{cout.precision(2);
	cout<<"\nLa targeta a sido aceptada debido a que cubre el monto de $ "<<credito[i].precio;}

    aux=i;

    cout<<"\nDesea realizar otra verificacion:"<<"\t1-SI"<<"\t2-NO ";
    cin>>opc;

    clrscr();  
   }
 
 cout<<"Desea ver las verificaciones realizas en el dia:"<<"\t1-SI"<<"\t2-NO ";
 cin>>opc;

 if(opc==1)
 	{
 	 for(i=0;i<=aux;i++)
        	{
		 if(credito[i].verificacion>1)
		 {cout<<"\nNumero de la tarjeta:\t"<<credito[i].tarjeta;
		 cout.precision(2);
		 cout<<"\nImporte de la compra:\t"<<credito[i].precio;
                 cout<<"\nCodigodel local: "<<credito[i].local<<" Verificacion: Rechazada ";}
                 else
		 {cout<<"Numero de la tarjeta:\t"<<credito[i].tarjeta;
		  cout.precision(2);
		 cout<<"\nImporte de la compra:\t"<<credito[i].precio;
		 cout<<"\nCodigodel local: "<<credito[i].local<<" Verificacion: Aceptada ";}
                 getche();
               	}
	}
 else
	cout<<"Gracias por utilizar nuestros progamas, que tenga buen dia";

 cout<<"Gracias por utilizar nuestros progamas, que tenga buen dia";
}

