#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<string.h>

class triangulo                      //Declaro clase
{
 double lado1;               
 double lado2;                       //variables
 double lado3;

 public:                             //la declaro publica

 void ingresar();                    //declaro los metodos
 double calc_peri();

};

void triangulo::ingresar()           //desarrollo los metodos
{
 cout<<"Ingrese lado 1: ";
 cin>>lado1;
 cout<<"Ingrese lado 2: ";
 cin>>lado2;
 cout<<"Ingrese lado 3: ";
 cin>>lado3;
}

double triangulo::calc_peri()
{
 return (lado1+lado2+lado3);
}

void main()                           //armo el progama
{
 triangulo T;                         //declaro la clase triangulo con variable "T"
 T.ingresar();
 cout<<T.calc_peri();
 getche();
}




