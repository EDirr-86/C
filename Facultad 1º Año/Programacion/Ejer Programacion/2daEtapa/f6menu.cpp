#include<iostream.h>
#include<conio.h>
#include<stdio.h>

//Hacer un algoritmo que introduce por teclado dos números y presenta una serie de opciones 
//de  operaciones aritméticas a realizar con los mismos (suma,  resta, multiplicación y división). 
//De acuerdo a la opción elegida se llama a la función  correspondiente que retorna el valor 
//del resultado de la  operación. Si se quiere seguir operando con los mismos números se debe 
//contestar 'S' al siguiente mensaje: “Otra operación con los mismos números S/N?"


int a,b,opc,opc2,opc3;

float suma (int a,int b);
float resta ( int a, int b);
float mult (int a,int b);
double div (double a,double b);

void main ()

{ do
  {
   cout<<"\ningrese el primer numero ";
   cin>>a;

   cout<<"\ningrese el segundo numero ";
   cin>>b;
   
   do{

   gotoxy (5,10);
   cout<<"MENU DE OPERACIONES";

   gotoxy(5,11);
   cout<<"(ingrese el numero correspondiente)";

   gotoxy(5,14);
   cout<<"OPCION 1: sumar ";

   gotoxy(5,16);
   cout<<"OPCION 2: restar ";

   gotoxy(5,18);
   cout<<"OPCION 3: multiplicar ";

   gotoxy(5,20);
   cout<<"OPCION 4: dividir ";

   gotoxy(5,22);
   cout<<"OPCION 5: SALIR DEL MENU\n";

   cin>>opc;

   clrscr();

   switch (opc)
   {
   case 1: 
   
	   cout<<"\nel resultado de la suma es "<<suma (a,b);
	   cout<<"\ndesea seguir operando con los mismos numeros? 1-SI 2-NO ";
	   cin>>opc2;break;
	  
   case 2: cout<<"\nel resultado de la resta es "<<resta(a,b);
	   cout<<"\ndesea seguir operando con los mismos numeros? 1-SI 2-NO ";
	   cin>>opc2;break;

   case 3: cout<<"\nel resultado de la multiplicacion es "<<mult(a,b);
	   cout<<"\ndesea seguir operando con los mismos numeros? 1-SI 2-NO ";
	   cin>>opc2;break;

   case 4: cout<<"\nel resultado de la division es "<<div(a,b);
	   cout<<"\ndesea seguir operando con los mismos numeros? 1-SI 2-NO ";
	   cin>>opc2;break;

   default: cout<<"codigo erroneo";

   }


   }
   while(opc2==1);

   cout<<"\ndesea operar con otros numeros o finalizar? 1-operar 2-fin ";
   cin>>opc3;

  }
  while(opc3==1);

   
}

float suma (int a,int b)
  {
    
    float res;

    res=a+b;

    return res;

    
   }

float resta (int a,int b)

   {
    
    float res;

    res=a-b;

    return res;

    

   }

float mult (int a,int b)
   {
    
    float res;

    res=a*b;

    return res;

    

   }

double div (double a,double b)
   {
    
    float res;

    res=a/b;

    cout.precision(3);   //es para aclarar cuantos decimales pero no anda

    return res;

    
   }
