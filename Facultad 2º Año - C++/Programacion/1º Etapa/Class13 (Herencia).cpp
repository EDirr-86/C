#include<stdlib.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>

class persona
{
char nom[80];
char dire[80];
int dni;

public:

void set_nombre(char nam[80]){strcpy(nom,nam);}
char *get_nombre(){return nom;}
void set_direc(char dir[80]){strcpy(dire,dir);}
char *get_direc(){return dire;}
void set_docum(int doc){dni=doc;}
int get_docum(){return dni;}
};

class empleados : public persona
{
int lega;
double sueldo;

public:

void set_legajo(int leg){lega=leg;}
int get_legajo(){return lega;}
void set_sueldo(double suel){sueldo=suel;}
double get_sueldo(){return sueldo;}
};

void main()
{
char nam[80],dir[80];
int doc,leg;
double suel;

empleados F;

cout<<"Ingrese el nombre: ";
gets(nam);
F.set_nombre(nam);

cout<<"\nIngrese la Direccion: ";
gets(dir);
F.set_direc(dir);

cout<<"\nIngrese D.N.I.: ";
cin>>doc;
F.set_docum(doc);

cout<<"\nIngrese Nº de legajo: ";
cin>>leg;
F.set_legajo(leg);

cout<<"\nIngrese sueldo que cobra: ";
cin>>suel;
F.set_sueldo(suel);

getche();
clrscr();

cout<<"Nombre: "<<F.get_nombre();
cout<<"\nDireccion: "<<F.get_direc();
cout<<"\nD.N.I.: "<<F.get_docum();
cout<<"\nNº de legajo: "<<F.get_legajo();
cout<<"\nSueldo: "<<F.get_sueldo();

getche();
}
