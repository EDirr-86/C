#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Ingresar dos numeros por teclados, compararlos y mostrar el mayor en´pantalla. Esta operacion debera repetirse 
//hasta  que la suma de los dos numeros ingresados sea igual a cero

int a,suma=0,b;

void main ()

{
 do

   {
    cout<<"\n\ningrese 1er numero: ";
    cin>>a;

    cout<<"\ningrese 2do numero: ";
    cin>>b;

    if (a>b)
	cout<<"el mayor es: "<<a;
    else
        cout<<"el mayor es: "<<b;

    suma=a+b;
   }

 while (suma!=0);

 getche();
}