#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<string.h>

//Escriba un programa que imprima un mensaje rodeado por un borde, utilizando funciones para
//dibujar los elementos del borde

void vertical(char a);
void horizontal(char a);

char a[20];
char m;
void main()
{
cout<<"Ingrese el mensaje a mostrar ";
cin>>a;
clrscr();
cout<<"ingrese caracter a dibujar:";
cin>>m;
clrscr();

gotoxy(18,10);
cout<<a;  

vertical(m);
horizontal(m);
}

void vertical(char a)
{
int y;
for(y=5;y<=15;y++)
        {
	 gotoxy(5,y);
	 cout<<a;
        }
for(y=5;y<=15;y++)
	{
	 gotoxy(35,y);
	 cout<<a;
        }
}
void horizontal(char a)
{
int x;
for(x=5;x<=35;x++)
        {
	 gotoxy(x,5);
	 cout<<a;
        }
for(x=5;x<=35;x++)
	{
	 gotoxy(x,15);
	 cout<<a;
        }
}