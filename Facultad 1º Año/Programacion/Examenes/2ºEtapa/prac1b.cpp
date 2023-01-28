#include<stdio.h>
#include<iostream.h>
#include<conio.h>

//Se ingresan N numeros, si el numero es par, calcular la suma y mostrar los
//enteros menosres a el. Si es impar calcular su factorial. Debe realizarlos a traves
//de 3 funciones: par, enteros_menores y factorial

long par(long a);
long enteros_menores(long a);
long factorial(long a);

long n,a,res,cont=0;

void main()
{
 cout<<"Ingrese N cantidad de numeros a comprobar: ";
 cin>>n;

 do
   {
    cout<<"\nIngrese el numero: ";
    cin>>a;

    res=par(a);

    if(res==2)
    	cout<<"\nEl resultado de la suma de los enteros menores a el es de: "<<enteros_menores(a);
    else
	cout<<"El resultado del factorial del numero ingresado es de: "<<factorial(a);

    getche();
    clrscr();    
    cont++;
   }
 while(cont<n);
}

long par(long a)
{
 int res;

 res=a/2;
 res=res*2;

 if(res==a)
	return 2;
 else
 	return 1;
}

long enteros_menores(long a)
{
 long cont,res=0;

 for(cont=1;cont<=a;cont++)
	{
	 cout<<"\t"<<cont;
	 res=res+cont;
	}
 return res;
}

long factorial(long a)
{
 long cont,res=1;

 for(cont=a;cont>1;cont--)
	{
	 res=res*cont;
	}
 return res;
}