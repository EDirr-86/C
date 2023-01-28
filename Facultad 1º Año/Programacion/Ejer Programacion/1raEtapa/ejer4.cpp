#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Ingrese diez números por teclado y mostrar en pantalla la suma de los positivos

int a,SPo=0,cont=0;

void main ()

{
 do
   {
    cout<<"ingrese un numero: ";
    cin>>a;

	if (a>0)
   	SPo=SPo+a;
    cont++;
   }
 while (cont<10);
cout<<"\nla suma de los numeros positivos es: "<<SPo;
getche();
}