#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>             //    protected = class base(variables privadas) de uso privado en la herencia

class fecha
{
protected:

int dia;
int mes;
int anio;

public:

void set_ingfecha(int dd,int mm,int aaaa){dia=dd;mes=mm;anio=aaaa;}
void ver_mostrar(){cout<<dia<<" / "<<mes<<" / "<<anio;}
};

class persona
{
protected:

char nombre[100];
long dni;
char direccion[100];

public:

void set_nombre(char nom[100]){strcpy(nombre,nom);}
char *get_nombre(){return nombre;}
void set_dni(long dni1){dni=dni1;}
long ver_dni(){return dni;}
void set_direccion(char dire[100]){strcpy(direccion,dire);}
void *get_direccion(){return direccion;}

};

class profesor : public persona
{
long legajo;
fecha fecha_alta;  // composicion

public:

void set_profesor(char nom[100],long dni1,char dire[100],long lega){strcpy(nombre,nom);dni=dni1;strcpy(direccion,dire);legajo=lega;}
void set_fecha_alta.set_ingfecha();

void ver_profesor(){cout<<"Nombre: "<<nombre<<"\nD.N.I.: "<<dni<<"\nDireccion: "<<direccion<<"Nro. de Legajo: "<<legajo<<"\n"<<fecha_alta.ver_mostrar();}

};

class estudiante : public persona
{

long legajo;
char carrera[100];

public:

void set_estudiante(char nom[100],long dni1,char dire[100],long lega,char carre[100]){strcpy(nombre,nom);dni=dni1;strcpy(direccion,dire);legajo=lega;strcpy(carrera,carre);}
void ver_estudiante(){cout<<"Nombre: "<<nombre<<"\nD.N.I.: "<<dni<<"\nDireccion: "<<direccion<<"Nro. de Legajo: "<<legajo<<"\nCarrera: "<<carrera;}
};

void main()
{
profesor P;        // P[20] arreglo de objetos
estudiante E;

int dd,mm,aaaa,opc;
long dni1,lega;
char nom[100],dire[100],carre[100];

cout<<"FCHAS DE ALTA";
cout<<"\n1-PROFESOR";
cout<<"\n2-ALUMNO";
cin>>opc;

if(opc==1)
	{
	 cout<<"\nIngrese Nombre: ";
    gets(nom);
	 cout<<"\nIngrese D.N.I.: ";
	 cin>>dni1;
	 cout<<"\nIngrse Direccion: ";
	 gets(dire);
	 cout<<"\nNumero de legajo: ";
	 cin>>lega;
    cout<<"\nFECHA DE ALTA";
	 cout<<"\nDia: ";
    cin>>dd;
    cout<<"\nMes: ";
    cin>>mm;
    cout<<"\nAnio: ";
    cin>>aaaa;
    P.set_profesor(nom,dni1,dire,lega);
    P.fecha_alta.set_ingfecha(dd,mm,aaaa);

    cout<<"\nPresione cualquier tecla para continuar";
    getche();
    clrscr();
    P.ver_profesor();
    getche();
	}
else
	{
    cout<<"\nIngrese Nombre: ";
    gets(nom);
	 cout<<"\nIngrese D.N.I.: ";
	 cin>>dni1;
	 cout<<"\nIngrse Direccion: ";
	 gets(dire);
	 cout<<"\nNumero de legajo: ";
	 cin>>lega;
    cout<<"\nIngrse Carrera: ";
	 gets(carre);
    E.set_estudiante(nom,dni1,dire,lega,carre);

    cout<<"\nPresione cualquier tecla para continuar";
    getche();
    clrscr();
    E.ver_estudiante();
    getche();
   }
}
