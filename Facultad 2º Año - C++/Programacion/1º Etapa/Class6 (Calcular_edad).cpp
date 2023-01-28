#include<string.h>
#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<dos.h> 				//para la fecha     //date HOY
                           // getdate(&HOY)
                          	//(HOY.da_mon>= P.persona get_mes
class fecha
{
int dia,mes,anio;
int hoy;

public:

void set_ingresar(int di,int me,int an){dia=di;mes=me;anio=an;}
void get_mostrar(){cout<<dia<<" / "<<mes<<" / "<<anio;}

void validar();
};

void fecha::validar()
{
date hoy;

getdate(&hoy);

if(hoy.da_mon<mes)
	cout<<"\nUste tiene: "<<((hoy.da_year-(anio))-1)<<" anios";
else
   {
    if(hoy.da_mon==mes)
   	{
       if(hoy.da_day<dia)
   	 	cout<<"\nUste tiene: "<<((hoy.da_year-(anio))-1)<<" anios";
       else
   		{
          if((hoy.da_day==dia)||(hoy.da_day>dia))
			   cout<<"\nUste tiene: "<<(hoy.da_year-(anio))<<" anios";
         }
      }
    else
    	cout<<"\nUste tiene: "<<(hoy.da_year-(anio))<<" anios";
   }
}

void main()
{
int di,me,an;

fecha f;

cout<<"FECHA DE NACIMIENTO: ";
cout<<"\nIngrese dia: ";
cin>>di;
cout<<"\nIngrese mes sin colocar cero: ";
cin>>me;
cout<<"\nIngrese anio: ";
cin>>an;

f.set_ingresar(di,(int) me,an);


f.get_mostrar();
f.validar();
getche();

}
