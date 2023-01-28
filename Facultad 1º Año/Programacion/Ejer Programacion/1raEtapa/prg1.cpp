#include<iostream.h>
#include<conio.h>
#include<stdio.h>

//Se leen 3 datos nombre, sueldo basico y antiguedad del empleado. Mostrar por pantalla el nombre y cuanto cobra.
//el sueldo se calcula adicionando al basico el 50% si la antiguedad supera los 10 años

long sb,antig,sueldo,n,cont=0,sst=0,ssb=0;
char a[20];

void main ()

{
 cout<<"ingrese cantidad de empleados ";
 cin>>n;

 do
   {
    cout<<"\ningrese nombre ";
    cin>>a;
    cout<<"\ningrese antiguedad ";
    cin>>antig;
    cout<<"\ningrese sueldo basico ";
    cin>>sb;

    if (antig>10)
	{
	 sueldo=sb+(sb*0.5);
	 sst=sst+sueldo;
	}
    else
	{
	 sueldo=sb;
	 ssb=ssb+sueldo;
	}

    cout<<a<<" su sueldo a cobrar es: "<<sueldo;
    cont++;
    }
 while (cont<n);

 cout<<"\nla suma de sueldos con 50% agregado es: "<<sst;
 cout<<"\nla suma de sueldos basicos es: "<<ssb;

 }