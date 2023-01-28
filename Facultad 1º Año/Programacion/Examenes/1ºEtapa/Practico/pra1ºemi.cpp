#include<iostream.h>
#include<stdio.h>
#include<conio.h>

long suma=0,n,cont1=0,mul=0,mul=0,cont2=0,cont3=0,b=3,su=0;

void main()
{
cout<<"ingrese lime a sumar: ";
cin>>n;

do
  {
   suma++;
  }
while (suma!=n);

cout<<"el resultado de la suma es "<<suma;

do
{
mul=mul+3;
cont1++;
}
while (mul<n);

cout<<"la suma de los multiplos de 3 es: "<<mul;
cout<<"la cantidad de multiplos hayados: "<<cont1;

do
{
mul2=mul2+4;
ont2++;
}
while(mul2<n);

cout<<"la suma de los multiplos de 4 es: "<<mul2;
cout<<"la cantidad de multiplos hayados: "<<cont2;

do
{
do
{
cont3=0;
b=b+3;
cont3++;
}
while (cont3!=3);
su=su+b;
cant++;
}
while (su<mul2);
cout<<"la suma de los multiplos de 3 y 4 es: "<<su;
cout<<"la cantidad de los multilpos de 3 y 4 es: "<<cant;
getche();
}