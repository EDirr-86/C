#include <iostream.h>
#include <conio.h>
#include <stdio.h>

//Realizar la tabla de multiplicar de un numero que se ingresa desde 0 al 10

long res,num,mul,opc;

void main()
{
 do
   {
    cout<<"ingrese el numero que desea saber su tabla ";
    cin>>num;

    for (mul=0;mul<=10;mul++)
		{
     		 res=num*mul;
     		 cout<<"\n" <<num <<"*" <<mul <<"=" <<res ;
		}
    cout<<"\n\nDesea saber otra tabla ";
    cout<<"\n1- Si";
    cout<<"\n2- No";
    cout<<"\nOpcion ";
    cin>>opc;
    clrscr();
   }
 while (opc!=2);	
}
