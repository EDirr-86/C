#include<iostream.h>
#include<conio.h>
#include<stdio.h>

//En una tienda se venden camisas a $10 cada una si se compran mas de 3 y a $12 si compran
//3 o menos. Diseñar un algoritmo donde ingresamos la cantidad de camisas compradas y nos muestre el precio total de venta

int n,cont=0,Tpunit=0,Tofer=0,Pofer,Punit,a;

void main ()

{
cout<<"\ningres cantidad de clientes que compraron: ";
cin>>n;

do
  {
   cout<<"\ncantidad de remeras compradas: ";
   cin>>a;
   if (a>3)
      {
       cout<<"el valor es de $10 c/u";
       Pofer=10*a;
       Tofer=Tofer+Pofer;
      }
   else
       {
        cout<<"el valor es de $12 c/u";
	Punit=12*a;
        Tpunit=Tpunit+Punit;
       }
	
   cont++;
  }
while (cont<n);

cout<<"\nla cantidad de dinero ingresado por la oferta es de: "<<Tofer;
cout<<"\n la cantida de dinero ingresado por venta normal es de: "<<Tpunit;
getche();

}     