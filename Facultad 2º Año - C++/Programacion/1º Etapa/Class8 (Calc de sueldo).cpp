#include<conio.h>
#include<string.h>
#include<iostream.h>
#include<stdio.h>

class salario               //sacar el salario atraves de salaraio+(ventas*0.05)
{
 char nom_apell[100];
 long legajo;
 double sueldo;

 public:

 void set_nomb_apell(char nomb[100]){strcpy(nom_apell,nomb);}
 void set_legajo(long leg1) {legajo=leg1;}
 char *get_nomb_apell() {return nom_apell;}
 long get_legajo() {return legajo;}
 void calc_salario(double sul_base, double acuvta);
 double get_saldo() {return sueldo;}
};

void salario::calc_salario(double sul_base, double acuvta)
{
 sueldo=sul_base+(acuvta*0.05);
}

void main()
{
char nomb[100];
long leg1;
double sul_base,acuvta;

salario S;

cout<<"Ingrese su nombre: ";
gets(nomb);
cout<<"\nIngrese numero de legajo: ";
cin>>leg1;
cout<<"\nIngrese el sueldo base que esta cobrando sin la ganacias: $";
cin>>sul_base;
cout<<"\nIngrese el monto de venta efectuado (total de ventas): $";
cin>>acuvta;

getche();
clrscr();

S.set_nomb_apell(nomb);
S.set_legajo(leg1);
S.calc_salario(sul_base,acuvta);
cout<<"Estimado "<<S.get_nomb_apell()<<" a usted este mes le corresponde cobrar: $"<<S.get_saldo()<<"\nLos datos son guadados en el legajo "<<S.get_legajo()<<" para cualquier consulta suya"<<"\nAtentamente La Administracion";

getche();
}
