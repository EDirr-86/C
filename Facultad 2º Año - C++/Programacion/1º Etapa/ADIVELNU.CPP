#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>

long azar,num,cont=0,cont2=0,opc;

void main()
{
 randomize();
 do
   {
    cout<<"ADIVINA EL NUMERO DEL 0-99 ";

    azar=random(100);

    cout<<"\nPresione cualquier tecla para continuar  ";
    getche();
 
  	do
   	  {
    	   cout<<"\n\nQue numero pensas que es??  ";
           cin>>num;

    	if(num>azar)
		{
		 cout<<"\nEs mas chico";
	 	 cont++;
		 cout<<"\nPresione cualquier tecla para continuar  ";
         	 getche();
		 clrscr();
		}

    	if(num<azar)
		{
		 cout<<"\nEs mas grande";
	 	 cont++;
		 cout<<"\nPresione cualquier tecla para continuar  ";
	 	 getche();
		 clrscr();
		}

    	if(num==azar)
		{
		 cont++;
	 	 cont2++;
	 	}
     
    	  }
 	while(cont2==0);

 cout<<"A acertado en el intento numero "<<cont++;

 cout<<"\nDesea intentar adivinar otro numero 1- Si // 2- No  ";
 cin>>opc;
 }
 while(opc==1);

 clrscr();

 cout<<"GRACIAS POR USAR NUESTRO PROGRAMA";

 }
         