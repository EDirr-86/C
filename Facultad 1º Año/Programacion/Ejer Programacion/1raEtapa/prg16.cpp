#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

int resultado;
char a[20],b[20];
              
void main()
{
 cout<<"ingrese 1er nombre: ";
 cin>>a;
 cout<<"ingrese 2do nombre: ";
 cin>>b;

 resultado=strcmp(a,b);

 if (resultado>0)
     cout<<"\nel mayor alfabeticamente es: "<<a;
 if (resultado<0)
     cout<<"\nel mayor alfabeticamente es: "<<b;
 if (resultado==0)
     cout<<"\nlos dos tienen el mismo nombre";
     
 if (strlen(a)>strlen(b))
     cout<<"\nel nombre mas largo es: "<<a;
 if (strlen(a)<strlen(b))
     cout<<"\nel nombre mas largo es: "<<b;
 if (strlen(a)==strlen(b))
     cout<<"\nlos dos nombre tienen las misma cant de caracteres";

 }