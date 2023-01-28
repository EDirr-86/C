#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class frac
{
int num;
int den;

public:

frac()  {num=1; den=1;}

void ingresar ();

frac suma(frac A, frac B);

frac suma(frac A, int d);

void mostrar();
};



void frac::ingresar()
{
cout<<"Ingrese numerador: ";
cin>>num;
cout<<"Ingrese denominador: ";
cin>>den;
}

frac frac::suma (frac A, frac B)
{
  frac aux;

  aux.num=(B.den*A.num)+(A.den*B.num);
  aux.den=A.den*B.den;

  return aux;
}

frac frac::suma (frac A, int d)
{
  frac aux;

  aux.num=(A.num)+(A.den*d);
  aux.den=A.den;

  return aux;
}


void frac::mostrar ()
{
cout<<"\n"<<num<<"/"<<den;
}





void main ()
{
frac A;
frac B;
frac C;
int d;
int opc;

A.ingresar();

cout<<"\Desea ingresar: 1- Fraccion 2- Entero. ";
cin>>opc;

if (opc==1)
{
B.ingresar();
C=C.suma(A, B);
}
  else
  {
  cout<<"Ingrese un numero: ";
  cin>>d;
  C=C.suma(A,d);
  }

C.mostrar();
getche ();
}