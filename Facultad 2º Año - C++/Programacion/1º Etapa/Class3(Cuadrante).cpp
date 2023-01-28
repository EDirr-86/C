#include <conio.h>
#include <iostream.h>
#include <stdio.h>

class coord
{
int x, y;

public:

void ingresar();
void comparar();

};

void coord::ingresar()
{
cout<<"Ingrese el valor de x= ";
cin>>x;
cout<<"\nIngrese el valor de y= ";
cin>>y;
}

void coord::comparar()
{
if ((x>0)&&(y>0))

  cout<<"Se encuentra en el cuadrante 1";

if ((x>0)&&(y<0))
  cout<<"Se encuentra en el cuadrante 2";

if ((x<0)&&(y<0))
  cout<<"Se encuentra en el cuadrante 3";

if ((x<0)&&(y>0))
  cout<<"Se encuentra en el cuadrante 4";

if ((x==0)&&(y==0))
  cout<<"\n\nSe encuentra en el origen del eje de las coordenadas";
}

void main ()
{
int opc;
coord C;

do
{

C.ingresar();

C.comparar();

cout<<"\n\nDesea realizarlo nuevamente \n 1-SI  2-NO ";
cin>>opc;
clrscr();
}
while (opc==1);

cout<<"\n\nMuchas gracias";}
  