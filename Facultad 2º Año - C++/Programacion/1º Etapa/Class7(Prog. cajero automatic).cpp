#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>

class cuenta
{
 char nombreapellido[80];
 int nrocta;
 double saldo;

public:

 void depositar(double monto);
 void extraer(double monto);
 double consusaldo();

 char *get_nombreapellido();
 void set_nombreapellido(char nam[80]);

 int get_nrocta();
 void set_nrocta(int num);
};

void cuenta::depositar(double monto)
{
 saldo=saldo+monto;
}

void cuenta::extraer(double monto)
{
 if(monto<=saldo)
   saldo=saldo-monto;
 else
 	cout<<"Su saldo es insuficiente para realizar esta operacion";
}

double cuenta::consusaldo()
{
 return saldo;
}

void cuenta::set_nombreapellido(char *nam)
{
 strcpy(nombreapellido,nam);
}
char *cuenta::get_nombreapellido()
{
 return nombreapellido;
}

void cuenta::set_nrocta(int num)
{
 nrocta=num;
}
int cuenta::get_nrocta()
{
 return nrocta;
}


void main()
{
 int num,opc;
 double monto;
 char nam[80];

 cuenta C;

 cout<<"Ingrese nombre de usuario: ";
 gets(nam);
 C.set_nombreapellido(nam);

 cout<<"\Ingrese numero de la cuenta: ";
 cin>>num;
 C.set_nrocta(num);

 getche();
 clrscr();

 do
 {
  cout<<"\nBienbenido Sr/a "<<C.get_nombreapellido();
  cout<<"\nMENU DE INICIO DE LA CUENTA Nro."<<C.get_nrocta();
  cout<<"\n1- DEPOSITAR";
  cout<<"\n2- EXTRAER";
  cout<<"\n3- CONSULTAR SALDO";
  cout<<"\n4- SALIR";
  cout<<"\n\nSeleccione una opcion: ";
  cin>>opc;

  switch(opc)
  		{
       case 1:cout<<"Cuanto desea Depositar: ";
       			cin>>monto;
               C.depositar(monto);
               cout<<"La operacion de deposito a finalizado, su saldo es: "<<C.consusaldo();
               getche();clrscr();break;
       case 2:cout<<"Cuanto desea Extraer: ";
       			cin>>monto;C.extraer(monto);
               cout<<"La operacion de extracion a finalizado, su saldo es: "<<C.consusaldo();
               getche();clrscr();break;
       case 3:cout<<"Su saldo es: "<<C.consusaldo();
       			getche();clrscr();break;
       default:cout<<"Estado de cuenta: "<<C.consusaldo();getche();clrscr();
      }
  }
 while(opc!=4);

 getche();
}
