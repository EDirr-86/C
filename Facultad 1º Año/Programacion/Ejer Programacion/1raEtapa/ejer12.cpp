#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Ingresar N numeros por teclado y mostrar en pantalla la cantidad que son positivos. 
//N es numero que se ingresa por teclado



int a,cont=0,n,contPos=0;

void main ()

{

cout<<"ingrese N cantida de numeros a ingresar: ";
cin>>n;


 do

   {
    cout<<"\ningrese un numero: ";
    cin>>a;

    if (a>0)
        contPos++;
	
    cont++;
   }

 while (cont!=n);

 cout<<"\nla cantida de numeros positivos ingresado es de: "<<contPos;

 getche();
}