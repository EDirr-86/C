#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Cargar una matriz bidimencional de nxn mostrar su cruz con '0'

long a[100][100],i,j,n,res,res2;

void main()
{
 randomize();

 cout<<"Digite el diametro d euna matriz nxn: ";
 cin>>n;

 res=n/2;
 res2=res*2;

 if(res2!=n)
 {
 for(i=0;i<n;i++)
	{
         for(j=0;j<n;j++)
		{
                 a[i][j]=random(10);
		 if(j==res)
                 	a[i][j]=0;
                }
        }
 for(j=0;j<n;j++)
	{
         for(i=0;i<n;i++)
		{
                 if(i==res)
                 	a[i][j]=0;
                 cout<<a[i][j]<<"  ";
		}
         cout<<"\n";
	}
 }
 else
 {
 for(i=0;i<n;i++)
	{
        for(j=0;j<n;j++)
      		{
                 a[i][j]=random(10);
      	 	 if(j==res)
          	 	a[i][j]=0;
      	         if(j==(res-1))
  			a[i][j]=0;
                     
               }
        }
  for(j=0;j<n;j++)
   	{
         for(i=0;i<n;i++)
       		{
                 if(i==res)
                       	a[i][j]=0;
		 if(i==(res-1))
			a[i][j]=0;
		
                 cout<<a[i][j]<<"  ";
	     	}
         cout<<"\n";
      	}
 }
}

