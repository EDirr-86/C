#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<string.h>             //    protected = class base(variables privadas) de uso privado en la herencia
#include<stdlib.h>

class deportista
{
protected:

char nombre[100];
char nacionalidad[100];
long dni;
long cant1,cant2,cant3;

public:

void set_nombre(char nom[100]){strcpy(nombre,nom);}
char *get_nombre(){return nombre;}

void set_nacionalidad(char nac[100]){strcpy(nacionalidad,nac);}
char *get_nacionalidad(){return nacionalidad;}

void set_dni(long dni1){dni=dni1;}
long get_dni(){return dni;}

void set_medallas(long oro,long plata,long bronce){cant1=oro;cant2=plata;cant3=bronce;}
//void get_medallas(){cout<<"Medallas ganadas"<<"\nOro: "<<cant1<<"\nPlata: "<<cant2<<"\nBronce: "<<cant3;}
};

class nadador : public deportista
{
char esti_nado[100];
double tiempo;
//long andarivel;

public:

void set_nadador(char nom[100],char nac[100],long dni1,long oro,long plata,long bronce,char estilo[100],double tiemp){strcpy(nombre,nom);strcpy(nacionalidad,nac);dni=dni1;cant1=oro;cant2=plata;cant3=bronce;strcpy(esti_nado,estilo);tiempo=tiemp;}

void ver_nadador(){cout<<"PLANILLA DE NATACION"<<"\nNombre: "<<nombre<<"\nD.N.I.: "<<dni<<"\nNacionalidad: "<<nacionalidad<<"\nEstilo de nado: "<<esti_nado;
							cout<<"\nLOGROS"<<"\nMedalla de oro: "<<cant1<<"\nMedalla de plata: "<<cant2<<"\nMedalla de bronce: "<<cant3<<"\nMejor tiempo: "<<tiempo;}

};

class futbolista : public deportista
{
char club[100];
char posicion[100];
long num_cami;

public:

void set_futbolista(char nom[100],char nac[100],long dni1,long oro,long plata,long bronce,long nro,char club1[100],char pos[100]){strcpy(nombre,nom);strcpy(nacionalidad,nac);dni=dni1;cant1=oro;cant2=plata;cant3=bronce;strcpy(club,club1);strcpy(posicion,pos);num_cami=nro;}

void ver_futbolista(){cout<<"PLANILLA DE FUTBOL"<<"\nNombre: "<<nombre<<"\nD.N.I.: "<<dni<<"\nNacionalidad: "<<nacionalidad<<"\nClub: "<<club<<"\nPosicion: "<<posicion<<"\nNumero de camiseta: "<<num_cami;
							cout<<"\nLOGROS"<<"\nMedalla de oro: "<<cant1<<"\nMedalla de plata: "<<cant2<<"\nMedalla de bronce: "<<cant3;}

};

void main()
{
nadador N;        // P[20] arreglo de objetos
futbolista F;

long opc,dni1,oro,plata,bronce,nro;
char nom[100],nac[100],club1[100],pos[100],estilo[100];
double tiemp;

do{
cout<<"PREGUNTAS FRECUENTES PARA UN: ";
cout<<"\n1- Nadador";
cout<<"\n2- Futbolista";
cout<<"\nOpcion elegida: ";
cin>>opc;
getche();
clrscr();

if(opc==1)
	{
    cout<<"Cuestionario";
    cout<<"\nNombre y Apellido: ";
    gets(nom);
    cout<<"\nD.N.I.: ";
    cin>>dni1;
    cout<<"\nNacionalidad: ";
    gets(nac);
    cout<<"\nEstilo de nado: ";
    gets(estilo);
    cout<<"\nMejor tiempo: ";
    cin>>tiemp;
    cout<<"\nMedalla de oro ganadas: ";
    cin>>oro;
    cout<<"\nMedalla de plata ganadas: ";
    cin>>plata;
    cout<<"\nMedalla de bronce: ";
    cin>>bronce;
    N.set_nadador(nom,nac,dni1,oro,plata,bronce,estilo,tiemp);

    cout<<"\nPreione cualquier tecla para continuar";
    getche();
    clrscr();
    N.ver_nadador();
    getche();
    clrscr();
   }
else
	{
    cout<<"Cuestionario";
    cout<<"\nNombre y Apellido: ";
    gets(nom);
    cout<<"\nD.N.I.: ";
    cin>>dni1;
    cout<<"\nNacionalidad: ";
    gets(nac);
    cout<<"\nCulb en el que juegas: ";
    gets(club1);
    cout<<"\nPosicion en la que juegas: ";
    gets(pos);
    cout<<"\nNumero que tienes en la camiseta: ";
    cin>>nro;
	 cout<<"\nMedalla de oro ganadas: ";
    cin>>oro;
    cout<<"\nMedalla de plata ganadas: ";
    cin>>plata;
    cout<<"\nMedalla de bronce: ";
    cin>>bronce;
    F.set_futbolista(nom,nac,dni1,oro,plata,bronce,nro,club1,pos);

    cout<<"\nPreione cualquier tecla para continuar";
    getche();
    clrscr();
    F.ver_futbolista();
    getche();
    clrscr();
   }
   cout<<"Desea realizar otra entrevista: 1-SI  //  2-NO";
   cin>>opc;
   cout<<"\nPreione cualquier tecla para continuar";
   getche();
   clrscr();
   }
while(opc==1);
}
