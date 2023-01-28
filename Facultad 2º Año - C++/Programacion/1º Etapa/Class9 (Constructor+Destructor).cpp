#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<string.h>

class coord
{
 int x,y,z;

 public:
 coord(){x=0;y=0;z=0;cout<<"\tNAVEGADOR SATELITAL";}																//por defecto
 coord(int p,int q,int r){x=p;y=q;z=r;cout<<"\nRecalculando... Recalculando...";} 					//por argumento o comun
 coord(const coord &c){x=c.x;y=c.y;z=c.z;cout<<"\nLos datos fueron guardados";} 													//por copia
 void get_mostrar(){cout<<"\nEstamos en la posicion: "<<x<<"\t"<<y<<"\t"<<z;}
 ~coord(){clrscr();cout<<"\nDanger chiguagua aproximandoce.. DANGER    DANGER\nBOOOOOOOOOOOOMMM";getche();}
};

void main()
{
 int p,q,r;
 coord co;

 cout<<"\nIngrese Latitud: ";
 cin>>p;
 cout<<"\nIngrese Longitud: ";
 cin>>q;
 cout<<"\nIngrese la Profundida: ";
 cin>>r;
 coord f(p,q,r);
 f.get_mostrar();
 getche();
 coord d=f;
 getche();
}
