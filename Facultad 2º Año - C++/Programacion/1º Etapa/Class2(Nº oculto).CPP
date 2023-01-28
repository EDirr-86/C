#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>

class noculto
{
int azar;
int num;

public:

int ocul();
void ingresar();
int comparar();

};

int noculto::ocul()
{
 randomize();
 azar=random(100);

 return azar;
}

void noculto::ingresar()
{
cout<<"\n¿Que numero piensa que es usted? ";
cin>>num;
}

int noculto::comparar()
{
 if(num>azar)
   {
    cout<<"El numero ingresado es mayor al oculto";   
    return 0;
   }
    if(num<azar)
   {
    cout<<"El numero ingresado es menor al oculto";
    return 0;
   }
 if(num==azar)
   {
    cout<<"¡¡Felicitaciones!! Usted ha acertado";
    return 1;
   }
}

int aux,opc;

void main()
{
 noculto A;
do
 {
 A.ocul();
 //cout<<A.ocul();

 do
   {
    A.ingresar();

    aux=A.comparar();

    cout<<"\n\nPresione cualquier tecla para cotinuar";
    getche();
    clrscr();
   }
 while(aux==0);

 cout<<"\nDesea probar suerte nuevamente: 1- SI // 2- NO ";
 cin>>opc;
 }
while(opc==1);

cout<<"\nMuchas gracias por usar nuestros servicios";}