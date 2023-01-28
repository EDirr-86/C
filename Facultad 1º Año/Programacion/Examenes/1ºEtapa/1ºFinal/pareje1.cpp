#include<iostream.h>
#include<stdio.h>
#include<conio.h>

long num2,mayor,par2,menor,num,cont=1,par,pos;

void main()
{
 cout<<"Ingrese un numero: ";
 cin>>num2;

 if(num2>0)
        {
         menor=num2;
         mayor=num2;

	 do
	   {
	    cout<<"\nIngrese un numero: ";
	    cin>>num;
            cont++;
            
	    if(num>0)
            {


	    if(num>mayor)
		 mayor=num;
		
	    else
		{
                 if(num<menor)
                       {
		 	par=num/2;
		 	par=par*2;
                 		if(par==num)
		 			menor=num;
					pos=cont;
                       }
                }
            }
	   }
          while(num>0);

	 cout<<"\nEl mayor numero ingresado es el: "<<mayor;
	 cout<<"\nEl menor numero ingresado es el: "<<menor;
         cout<<"\nEl "<<menor <<" ingreso en la posicion nº: "<<pos;
	}
else
cout<<"El programa Finalizo";


}