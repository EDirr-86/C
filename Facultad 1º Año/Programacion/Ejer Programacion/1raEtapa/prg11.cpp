#include <iostream.h>
#include <conio.h>
#include <stdio.h>

//Idem prg10.cpp pero si el operador ingreso el limite inferior mayor que el superior,
//debera mostrar los pares o impares en forma decreciente

long conti=0,contp=0,sumai,sumap,a,d,b,c,opc;

void main()
{
  do {
      cout<<"\ningrese (el desde): ";
      cin>>a;
      cout<<"\ningrese (el hasta): ";
      cin>>b;
     }
  while (b==a);
                                       
  cout<<"\nque opcion desea realizar 1- par o 2- impar: ";
  cin>>opc;

if(a<b)
  {
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
else
  {
  if (opc==1)
	{
	 for (sumap=a;sumap>=b;sumap--)
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
         for (sumai=a;sumai>b;sumai--)
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
}
