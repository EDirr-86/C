#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>


//invertir un arreglo metodo burbuja


long a[10],i,flag=1,aux;

void main()
{
 randomize();

 for(i=0;i<10;i++)
  {
   a[i]=random(10);

   //cout<<"\ning num ";cin>>a[i];



   cout<<"  "<<a[i];

  }

 while(flag!=0)
  {
    flag=0;

   for(i=0;i<9;i++)
    {
     

     if(a[i]>a[i+1])
      {
       aux=a[i];

       a[i]=a[i+1];

       a[i+1]=aux;

       

       flag=1;
      }
     }
   }


 cout<<"\n\n";

 for(i=0;i<10;i++)
  {
   cout<<"  "<<a[i];

  }

}