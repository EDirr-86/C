#include<stdio.h>
#include<iostream.h>
#include<conio.h>

//Ingresar 3 numeros por teclado a, b y c. mostrarlo ordenados
//(en forma ascendente) funcion 2 valores

int a,b,c;
void intercambio(int &x,int &y);

void main()
{
 cout<<"Primer numero "; cin>>a;
 cout<<"Segundo numero "; cin>>b;
 cout<<"Tercer numero "; cin>>c;

 if(a>b)
     intercambio(a,b);

 if(b>c)
	{
         intercambio(b,c);
     		if(a>b)
         		intercambio(a,b);
  	}

 cout<<a<<"   "<<b<<"    "<<c;

 getche();
}

void intercambio(int &x,int &y)
{
 int aux;
 aux=x;
 x=y;
 y=aux;
}