#include <iostream.h>
#include <conio.h>
#include <stdio.h>

//Hacer un programa que ingrese un rango (es decir el desde y el hasta), luego mostrar por pantalla los numeros
//pares o impares de dicho rango segun la eleccion del operador. Mostrar cuantos pares o impares hay en el rango
//elegido. Considerar que el que el operador puede ingresar el limite inferior (el desde) mayor o igual que el
//limite superior (el hasta)

long conti=0,contp=0,sumai,sumap,a,d,b,c,opc;

void main()
{
  do {
      cout<<"\ningrese (el desde): ";
      cin>>a;
      cout<<"\ningrese (el hasta): ";
      cin>>b;
     }
  while (b<=a);
                                       
  cout<<"\nque opcion desea realizar 1- par o 2- impar: ";
  cin>>opc;

  if (opc==1)
	{
	 for (sumap=a;sumap<=b;sumap++)
		{
                 d=sumap/2;
                 d=d*2;
                 if (sumap==d)
			{
			 cout<<sumap<<"\t";
                         contp++;
			}
                }
	 cout<<"\nla cantidad de numeros pares es de: "<<contp;
	}
  else
        {
         for (sumai=a;sumai<b;sumai++)
	 	{
		 d=sumai/2;
		 d=d*2;
		 if(sumai!=d)
                 	{
			 cout<<sumai<<"\t";
                         conti++;
			}
		}
		 cout<<"\nla cantidad de numeros impares es de:"<<conti;
        }
}
