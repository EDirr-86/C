#include <iostream.h>
#include <conio.h>
#include <stdio.h>

//Diseñar un algoritmo que calcule para los N primeros numeos naturales: La suma y cantidad de los multiplos de 3.
//La suma y cantidad de los multiplos de 4. La suma y la cantidad de los multiplos de 3 y 4. La suma total.

int a,b,c,n,cont3=0,cont4=0,cont34=0,mult3=0,mult4=0,mult34=0,suma=0,sumat;

void main()
{
    
cout<<"ingrese to pe de los primeros numeros naturales: ";
cin>>n;

do
  {
   suma=suma+1;

   a=suma/3;
   a=a*3;

   if (a==suma)
      {
       mult3=mult3+suma;
       cont3++;

       c=suma/4;
       c=c*4;

       if (c==suma)
	   {
	    mult34=mult34+suma;
	    cont34++;
	   }
      }

   b=suma/4;
   b=b*4;

   if (b==suma)
       {
	mult4=mult4+suma;
	cont4++;
       }
sumat=mult3+mult4+mult34;
  }
while (suma!=n);

cout<<"\nla suma de los mutiplos de 3 es de: "<<mult3;
cout<<"\nla cantide multiplos de 3 es de: "<<cont3;
cout<<"\n\nla suma de los mutiplos de 4 es de: "<<mult4;
cout<<"\nla cantide multiplos de 4 es de: "<<cont4;
cout<<"\n\nla suma de los mutiplos de 3 y 4 es de: "<<mult34;
cout<<"\nla cantide multiplos de 3 y 4 es de: "<<cont34;
cout<<"\n\nla suma total es de: "<<sumat;
getche ();

}