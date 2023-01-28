#include<iostream.h>
#include<stdio.h>
#include<conio.h>

long base,altu,n,sup,suma=0,cont=0;

void main()
{
 cout<<"Ingrese N cantide de pares a ingresar: ";
 cin>>n;

 do
   {
    cout<<"\n\nIngrese base: ";
    cin>>base;
    cout<<"Ingrese altura: ";
    cin>>altu;

    sup=(base*altu)/2;

    cout<<"\nLa superficie de este triengulo es de: "<<sup;

    suma=suma+sup;
    cont++;

   }
 while(cont!=n);
cout<<"\n\nLa suma de todas las superficies es de: "<<suma;
}