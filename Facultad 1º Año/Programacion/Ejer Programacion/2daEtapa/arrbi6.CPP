#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>


//buscar en un arreglo


long a[10],i,flag=1,aux;

void main()
{
 randomize();


 //llenar el arreglo

 for(i=0;i<10;i++)
  {
   a[i]=random(100);

   


   cout<<"  "<<a[i];

  }

 //ordenar el arreglo

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


 //buscar en el arreglo


 long min,max,med,num;


 cout<<"\n\ningrese numero a buscar ";
 cin>>num;

 min=0;

 max=10;

 med=(min+max)/2;


 do
  {
   flag=0;

   if(num==a[med])
    {
     cout<<"\nel num se ha encontrado en la posicion "<<med;
    }
   else
    {
     if(num>a[med])
      {
       min=med+1;
       med=(min+max)/2;
       flag=1;
      }
     else
      {      
       max=med-1;
       med=(min+max)/2;
       flag=1;
      
      }
     


     }
   
       


   }
  while(flag!=0);

  
  


}