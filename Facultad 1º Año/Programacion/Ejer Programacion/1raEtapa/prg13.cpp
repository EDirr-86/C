#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

//Diseñar un algoritmo que simule el lanzamiento de una moneda

long opc2,opc,a,cont;

void main()
{
 randomize();
 cout<<"Desea jugar partida simple (opc 1) o mejor de 3 (opc 2) ";
 cin>>opc;

 a=random(2);
 if(opc==1)
 	{
	 cout<<"Elija 1-cara o 2-cruz ";
         cin>>opc2;
 	 if(a==0)
		{
		 cout<<"\tCARA";
		 if(opc2==1)
		   cout<<"\tCongratulations!!!! Usted gana :-)";
                 else
		   cout<<"\tSiga participando!!!! Usted pierde :-(";
		}
 	 else
               {
		cout<<"\tCRUZ";
		if(opc2==2)
		   cout<<"\tCongratulations!!!! Usted gana :-)";
                 else
		   cout<<"\tSiga participando!!!! Usted pierde :-(";
	       }
        }
 else
 	{
 	 for (cont=0;cont<3;cont++)
		{
		 cout<<"\nElija 1-cara o 2-cruz ";
 		 cin>>opc2;
		 a=random(2);

	 	 if(a==0)
			{
		 	 cout<<"\tCARA";
		 	 if(opc2==1)
		   		cout<<"\tCongratulations!!!! Usted gana :-)";

                 	 else
		   	 	cout<<"\tSiga participando!!!! Usted pierde :-(";
			}
 	 	 else
			{
			 cout<<"\tCRUZ";
			 if(opc2==2)
		   		cout<<"\tCongratulations!!!! Usted gana :-)";
                 	 else
		   	 	cout<<"\tSiga participando!!!! Usted pierde :-(";
	       		}
		}
	}
}