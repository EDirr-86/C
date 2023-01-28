#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>

  //ordenar un arreglo por el metodo de comparacion
 
int a[10],j,i,aux;

void main()
{
 
 randomize();

 for(i=0;i<10;i++)
  {
   a[i]=random(10);

   cout<<"  "<<a[i];

  }

 for(i=0;i<9;i++)
  {
   for(j=i+1;j<10;j++)
    {
     if(a[i]>a[j])
      {
       aux=a[i];

       a[i]=a[j];

       a[j]=aux;
      }
    }
  }

 cout<<"\n\n";



 for(i=0;i<10;i++)
  {
   

   cout<<"  "<<a[i];

  }






}
