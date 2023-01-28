#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Ingresar por teclado la calificacion numerica de N alumnos. Realizar una funcion que permita
//convertir las calificaciones numericas en alfabeticas

void calif(int a);
int a,n,cont;

void main()
{
 cout<<"ingrese n cantidad de alumnos a comvertir sus notas ";
 cin>>n;

 for(cont=0;cont<n;cont++)
	{
	 cout<<"\ningrese nota en numero: ";
	 cin>>a;

	 calif(a);
	}
}

void calif(int a)
{
 if(a==0)
	cout<<"Su calificacion alfabetica es: "<<'E';
 else
 	{
	 if(a>=1)
	 	{
		 if(a<=4)
			cout<<"Su calificacion alfabetica es: "<<'D';
		 else
                       {
		 	if(a>=5)
		 		{
			 	 if(a<=7)
					cout<<"Su calificacion alfabetica es: "<<'C';
				 else
                                       {
				 	if(a>=8)
						{
				 		 if(a<=9)
							cout<<"Su calificacion alfabetica es: "<<'B';
                                 		 else
                                                 	{
                                                         if(a==10)
                                                         	cout<<"Su calificacion alfabetica es: "<<'A';
							 else
                                                         	cout<<"ERROR AL INGRESAR LA CALIFICACION";
							}				}
                                       }
                                }
                       }
                }
        }
}

