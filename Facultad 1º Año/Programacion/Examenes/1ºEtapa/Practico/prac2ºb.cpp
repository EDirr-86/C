#include<iostream.h>
#include<stdio.h>
#include<conio.h>

long a,b,c,e=1;

void main ()

{
 cout<<"ingrese numero a factorear ";
 cin>>a;

 for (b=a;b!=1;b--)
	{
	 c=b*e;
         e=c;
	}
cout<<"\nel resultado es"<<"\t"<<c;
}