#include<conio.h>
#include<stdio.h>
#include<iostream.h>

class	frac
{
 int num;
 int den;

 public:

 frac(){num=1;den=1;}

 frac(int nu,int de){num=nu;den=de;}

 frac operator+(frac B);

 void get_mostrar(){cout<<"\n"<<num<<"\n---"<<"\n"<<den;}
};

 frac frac::operator+(frac B)
 {
  frac Aux;

  Aux.num=(num*B.den)+(den*B.num);
  Aux.den=den*B.den;

  return Aux;
 }

void main()
{
 int nu,de;

 frac A(2,2);

 cout<<"Ingrese otro Numerador: ";
 cin>>nu;
 cout<<"\nIngrese otro Denominador: ";
 cin>>de;
 frac B(nu,de);

 frac C;
 C=A + B;
 C.get_mostrar();
 getche();
}