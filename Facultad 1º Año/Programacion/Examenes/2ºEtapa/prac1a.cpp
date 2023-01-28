#include<stdio.h>
#include<iostream.h>
#include<conio.h>

//Se ingresan los lados de N poligonos de 4 lados (a,b,c,d). Mostrar el menor
//lado de cada figura, para ello usar una funcion que calcule el menor de 2 valores

long menorlado(long a,long b);

long n,a,b,c,d,res,res2,cont=0;

void main()
{
 cout<<"Ingrese N cantidad de poligonos: ";
 cin>>n;

 do
   {
    cout<<"\nIngrese el 1º lado: ";
    cin>>a;
    cout<<"Ingrese el 2º lado: ";
    cin>>b;
    cout<<"Ingrese el 3º lado: ";
    cin>>c;
    cout<<"Ingrese el 4º lado: ";
    cin>>d;

    cout<<"El menor lado del poligono es de: "<<menorlado(menorlado(menorlado(a,b),c),d);
    cout<<"\nPresione cualquier tecla para continuar u terminar el programa";
    getche();
    clrscr();    
    cont++;
   }
 while(cont<n);
}

long menorlado(long a,long b)
{
 if(a>b)
	return b;
 else
	return a;
}