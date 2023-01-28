#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Hacer una programa que nos permita introducir un numero por teclado y sobre el que se realicen
//la siguiente operaciones. 1- comprobrar si es primo, 2- hallar su factorial y
//3-imprimir su tabla de multiplicar

long opc,nump,div,opcp,resp,flagg,numf,resf,opcf,numt,rest,mul,opct;

void main()
{
 do
   {
    gotoxy(15,5);
    cout<<"MENU";
    gotoxy(5,6);
    cout<<"1- SABER SI ES PRIMO";
    gotoxy(5,7);
    cout<<"2- SABER SU FACTORIAL";
    gotoxy(5,8);
    cout<<"3- SABER SU TABLA DE MULTIPLICAR";
    gotoxy(5,9);
    cout<<"4- SALIR";
    gotoxy(10,10);
    cout<<"ELIGIR OPCION ";
    cin>>opc;
    clrscr();

    switch (opc)
	{
	 case 1:
		{
		 do
                   {
		    cout<<"Ingrese numero: ";
		    cin>>nump;
		    flagg=0;

		    for(div=2;div<=(nump/2);div++)
			{
			 resp=nump/div;
			 resp=resp*div;

			 if(resp==nump)
				{flagg=1;}
			}
		    if(flagg==0)
			{cout<<"\nEl numero "<<nump <<" es primo ";}
		    else
			{cout<<"\nEl numero "<<nump <<" no es primo ";}

		    cout<<"\n\nDesea informarse sobre otro numero? ";
		    cout<<"\n1- Si";
                    cout<<"\n2- No";
		    cout<<"\nOPCION ";
                    cin>>opcp;
		    clrscr();
		   }
		 while(opcp!=2);
		}
		 break;

	 case 2:
		{
		 do
	           {
	            cout<<"Ingrese numero: ";
		    cin>>numf;

		    for(resf=1;numf!=1;numf--)
		    	{
		     	 resf=resf*numf;
                    	}

		    cout<<"\nEl resultado del factorial es "<<resf;

		    cout<<"\n\nDesea informarse sobre otro numero? ";
		    cout<<"\n1- Si";
                    cout<<"\n2- No";
		    cout<<"\nOPCION ";
                    cin>>opcf;
		    clrscr();
		   }
		 while(opcf!=2);
		}
		 break;

	 case 3:
		{
		 do
		   {
		    cout<<"Ingrese numero: ";
		    cin>>numt;

		    for(mul=0;mul<=10;mul++)
			{
			 rest=numt*mul;
                         cout<<"\n"<<numt<<"*"<<mul<<"="<<rest;
                        }
		    cout<<"\n\nDesea informarse sobre otro numero? ";
		    cout<<"\n1- Si";
                    cout<<"\n2- No";
		    cout<<"\nOPCION ";
                    cin>>opct;
		    clrscr();
		   }
		 while(opct!=2);
		}
		 break;
	 default:cout<<"Codigo erroneo";

	 if(opc>4)
            {opc=0;}
        }
   }
  while(opc!=4);
clrscr();

gotoxy(10,10);
cout<<"GRACIAS POR USAR NUESTRO PROGRAMA";

}