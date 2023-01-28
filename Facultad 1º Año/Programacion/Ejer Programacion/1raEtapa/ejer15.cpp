#include<iostream.h>
#include<stdio.h>
#include<conio.h>

//Dados dos valores A y B, calcular A/B si A es mayor que B; sino calcular su producto. El proceso
//finaliza cuando A sea igual a B

int a,b,divi,prod;

void main ()

{

 do
   {
    cout<<"\n\ningrese 1er numero: ";
    cin>>a;
    cout<<"\ningrese 2do numero: ";
    cin>>b;

    if (a!=b)
      {
       if (a>b)
          {
           divi=a/b;
           cout<<"\nel resultado de la division es: "<<divi;
          }
       else
          {
       prod=a*b;
       cout<<"\nel resultado de la multiplicacion es: "<<prod;
          }
      }
    else
       cout<<"\nlos dos numeros son iguales el proceso finalizo";
   }

 while (a!=b);

 
 getche();
}