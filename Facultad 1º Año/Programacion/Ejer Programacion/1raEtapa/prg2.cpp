#include<iostream.h>
#include<conio.h>
#include<stdio.h>

//En un comercio se venden 3 modelos de frascos cod. (1,2,3) se desea hacer un algoritmo que ingrese el codigo
//numerico de un frasco y que escriba por pantalla lo siguiente Chico, Mediano o Grande

int c1=1,c2=2,c3=3,cod;
char a[20]="frasco grande",b[20]="frasco mediano",c[20]="frasco chico";

void main ()

{

 cout<<"\ningrese codigo numerico: ";
 cin>>cod;

 if (cod==c1)
    cout<<a;

 else
   {
    if (cod==c2)
	cout<<b;
    else
	cout<<c;
   }
}   