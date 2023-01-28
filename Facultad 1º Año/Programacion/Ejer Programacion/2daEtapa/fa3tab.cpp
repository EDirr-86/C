#include<conio.h>
#include<stdio.h>
#include<iostream.h>

//Escriba un programa que imprima una tabla con la areas del circulo y de la esfera
//para un radio en el rango de 0 hasta 2 en incrementos de 0.2

double tabla(double a);

int a;

void main()
{
 cout<<"Ingrese tope de la tabla: ";
 cin>>a;
 clrscr();
 tabla(a);
 
}

 double tabla(double a)
 {
  double r,res,res2;
  int y=5,c=5,e=5;

  gotoxy(1,1);
  cout<<"===Tabla de Areas===";
  gotoxy(1,3);
  cout<<"Radio";
  gotoxy(7,3);
  cout<<"Circulo";
  gotoxy(15,3);
  cout<<"Esfera";
  gotoxy(1,4);
  cout<<"--------------------";

  
  for(r=0.00;r<=a;r=r+0.20)
  	{
	 gotoxy(1,y);
         cout<<r;
         y++;

         res=3.14*(r*r);
         gotoxy(7,c);
         cout.precision(3);
	 cout<<res;
         c++;

	 res2=3.14*4*(r*r);
	 gotoxy(15,e);
	 cout.precision(3);
	 cout<<res2;
         e++;
	}
        
 }