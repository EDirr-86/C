#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
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
 		 cout<<"\nIngrese el dia:  ";
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
     	  		{
             if(dia>=1&&dia<=31)
       	 		 return 1;
        		 else
          		 return 0;
            }
     	 	 if((mes==4)||(mes==6)||(mes==9)||(mes==11))
     	 	 	{
             if(dia>=1&&dia<=30)
       	 		return 1;
        		 else
          		return 0;
            }
     		 if(mes==2)
     	  		{
             if(dia>=1&&dia<=28)
       	 		return 1;
             else
          		return 0;
      	   }
         }
 		 else
 			return 0;
      }

class persona
{
 long dni;
 char nombre[30];
 char direccion[30];
 fecha fecha_nac;

 public:

 void set_dni(long dni1);
 long get_dni();

 void set_nombre(char name1[30]);
 char *get_nombre();

 void set_direccion(char adress1[30]);
 char *get_direccion();

 void set_fecha_nac();
 void get_fecha();
};

void persona::set_dni(long dni1)
{
 dni=dni1;
}
long persona::get_dni()
{
 return dni;
}

void persona::set_nombre(char name1[30])
{
 strcpy(nombre,name1);
}
char *persona::get_nombre()
{
 return nombre;
}

void persona::set_direccion(char adress1[30])
{
 strcpy(direccion,adress1);
}
char *persona::get_direccion()
{
 return direccion;
}

void persona::set_fecha_nac()
{
 int auxx;
 do
  {
   fecha_nac.ingresar_dia();
 	fecha_nac.ingresar_mes();      //hacer do - while aca
 	fecha_nac.ingresar_anio();

 	auxx=fecha_nac.validar();

   if(auxx==1)
   	cout<<"La fecha ingresada es valida";
   else
   	cout<<"Intente nuevamente";
   getche();
   clrscr();
   cout<<"\nPresione cualquier tecla para continuar";
  }
 while(auxx==0);

}

void persona::get_fecha()
{
 fecha_nac.mostrar();
}


void main()
{
 long aux,opc,dni1;
 char name1[30],adress1[30];

 fecha F;
 persona P;

 cout<<"Ingrese su nombre:  ";
 gets(name1);

 cout<<"Ingrese su direccion:  ";
 gets(adress1);

 cout<<"Ingresar DNI:  ";
 cin>>dni1;
 cout<<"INGRESE SU FECHA DE NACIMIENTO";
  P.set_fecha_nac();
  getche();
  clrscr();
  cout<<"\nPresione cualquier tecla para continuar";

 cout<<"\nFecha: ";
 P.get_fecha();

 P.set_nombre(name1);
 cout<<"\n"<<"Nombre: ";
 cout<<P.get_nombre();

 P.set_dni(dni1);
 cout<<"\n"<<"D.N.I.: ";
 cout<<P.get_dni();

 P.set_direccion(adress1);
 cout<<"\n"<<"Direccion: ";
 cout<<P.get_direccion();

 getche();
}
