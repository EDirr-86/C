#include<stdio.h>
#include<iostream.h>
#include<conio.h>

class fecha
{
 int dia;
 int mes;
 int anio;

 public:

 void ingresar_dia();
 void ingresar_mes();
 void ingresar_anio();
 void mostrar();
 int validar();
};

void fecha::ingresar_dia()
{
 cout<<"Ingrese el dia:  ";
 cin>>dia;
}

void fecha::ingresar_mes()
{
 cout<<"Ingrese el mes:  ";
 cin>>mes;
}

void fecha::ingresar_anio()
{
 cout<<"Ingrese el anio:  ";
 cin>>anio;
}

void fecha::mostrar()
{
 cout<<"\n\t"<<dia<<" / "<<mes<<" / "<<anio;
}

int fecha::validar()
{
 if(anio>=1900)
    {
     if((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12))
     	  if(dia>=1&&dia<=31)
       	 return 1;
        else
          return 0;

     if((mes==4)||(mes==6)||(mes==9)||(mes==11))
     	  if(dia>=1&&dia<=30)
       	 return 1;
        else
          return 0;

     if(mes==2)
     	  if(dia>=1&&dia<=28)
       	 return 1;
        else
          return 0;
    }
 else
 	return 0;
}

void main()
{
 int aux,opc;

 fecha F;

 do
  {
   clrscr();

   F.ingresar_dia();
   F.ingresar_mes();
   F.ingresar_anio();

   cout<<"\nPresione cualquier tecla para continuar ";
   getche();
   clrscr();

   F.mostrar();

   cout<<"\nPresione cualquier tecla para comprobar la validacion ";
   getche();
   clrscr();

   aux=F.validar();

   if(aux==1)
   	cout<<"\tLa fecha ingresada es correcta";
   else
      cout<<"\tLa fecha ingresada es incorrecta";

   cout<<"\nDesea realizar otra confirmacion: 1-Si // 2-No   ";
   cin>>opc;
  }
 while(opc==1);
}

