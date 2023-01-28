#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Calcular los dias que tiene el mes de acuerdo al año ingresado

int a,b,c,mes,anio;

void main ()

{
 do
 {
 cout<<"\n\ningrese año: ";
 cin>>anio;

 cout<<"\ningrese mes: ";
 cin>>mes;
 clrscr();
 if (mes==2)
    {
     a=anio/4;
     a=a*4;

     if(a==anio)
	{
	b=anio/100;
	b=b*100;

	if(b!=anio)
          {
	  cout<<"\nel mes que usted ingreso es febrero y tiene 29 dias porque es año bisiesto";
          cout<<"\n\neste año es bisiesto porque cumple los requisitos,no es el ultimo año de un siglo y es divisible por 4 y no por 100";
          }
	else
          {
	  c=anio/400;
	  c=c*400;
	  if(anio==c)
            {
            cout<<"\nel mes que usted ingreso es febrero y tiene 29 dias porque es año Bisiesto"; 
            cout<<"\n\neste año es bisiesto porque es el ultimo año de un siglo,cumple con lo requisitos,ser divisible por 4,divisible por 100 y por 400"; 
            }
	  else
	    cout<<"\nel mes que usted ingreso es febrero y tiene 28 dias por no ser año bisiesto";
	  }
	 }
      else
	cout<<"el mes que usted ingreso es febrero y tiene 28 dias por no ser año Bisiesto";
     }
 else

 switch(mes)

 {
  case 1:cout<<"\nel mes es enero y tiene 31 dias";break;

  case 3:cout<<"\nel mes es marzo y tiene 31 dias";break;

  case 4:cout<<"\nel mes es abril y tiene 30 dias";break;

  case 5:cout<<"\nel mes es mayo y tiene 31 dias";break;

  case 6:cout<<"\nel mes es junio y tiene 30 dias";break;

  case 7:cout<<"\nel mes es julio y tiene 31 dias";break;

  case 8:cout<<"\nel mes es agosto y tiene 31 dias";break;

  case 9:cout<<"\nel mes es septiembre y tiene 30 dias";break;

  case 10:cout<<"\nel mes es octubre y tiene 31 dias";break;

  case 11:cout<<"\nel mes es noviembre y tiene 30 dias";break;

  case 12:cout<<"\nel mes es diciembre y tiene 31 dias";break;

  default:cout<<"\nel numero no corresponde a un mes";

 }
 if (mes>12)
    mes=1;
 }
 while(mes<13);

} 