#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Algoritmo con gotoxy y switch

int a;

void main ()

{
 do
   {
   gotoxy(34,4);
   cout<<"MENU DE OPCIONES";

   gotoxy(32,6);
   cout<<"1- INGRESE DATOS";

   gotoxy(32,8);
   cout<<"2- IMPRIMIR DATOS";

   gotoxy(32,10);
   cout<<"3- CALCULAR DATOS";

   gotoxy(32,12);
   cout<<"4- PROCESAR";

   gotoxy(32,14);
   cout<<"5- SALIR DEL MENU";

   gotoxy(32,16);
   cout<<"ELEGIR OPCION ";
   cin>>a;

   clrscr();

   switch (a)
             {
	      case 1:cout<<"usted a ingresado la opcion numero 1";break;
	      case 2:cout<<"usted a ingresado la opcion numero 2";break;
	      case 3:cout<<"usted a ingresado la opcion numero 3";break;
	      case 4:cout<<"usted a ingresado la opcion numero 4";break;
	      case 5:cout<<"usted a ingresado la opcion numero 5";break;
	      default:cout<<"el codigo ingresado es erroneo";
             }
   if(a>5)
      a=1;
   }

 while(a<5);
 getche();

} 