#include<conio.h>
#include<stdio.h>
#include<iostream.h>

class	frac
{
 int num;
 int den;

 public:

 frac(){num=1, den=1;}

 frac(int nu,int de){num=nu;den=de;}

 frac suma(frac A, frac B);

 void get_mostrar(){cout<<"\n"<<num<<"\n---"<<"\n"<<den;}
};

 frac frac::suma(frac A,frac B)
 {
  frac Aux;

  Aux.num=(A.num*B.den)+(A.den*B.num);
  Aux.den=A.den*B.den;

  return Aux;
 }

void main()
{
 int nu,de;

 cout<<"Ingrese Numerador: ";
 cin>>nu;
 cout<<"\nIngrese Denominador: ";
 cin>>de;
 frac A(nu,de);

 cout<<"Ingrese otro Numerador: ";
 cin>>nu;
 cout<<"\nIngrese otro Denominador: ";
 cin>>de;
 frac B(nu,de);

 frac C;
 C=C.suma(A,B);
 C.get_mostrar();
 getche();
}