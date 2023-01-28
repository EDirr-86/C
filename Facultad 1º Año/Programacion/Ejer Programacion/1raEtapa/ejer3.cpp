#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Ingrese diez números por teclado y mostrar en pantalla la cantidad que son positivos

int a,CPo=0,cont=0;

void main ()

{
 do
   {
    cout<<"ingrese un numero: ";
    cin>>a;

	if (a>0)
   	CPo++;
    cont++;
   }
 while (cont<10);
cout<<"\nla cantida de numeros positivos ingresados es de: "<<CPo;
getche();
}