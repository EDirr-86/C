#include <iostream.h>
#include <conio.h>
#include <stdio.h>

//Hacer un programa que simule el funcionamiento de un reloj digital

long hora,min,seg,cont;

void main()
{
 for (hora=0;hora!=25;hora++)
        {
	 for (min=0;min!=59;min++)
		{
		 for (seg=0;seg!=59;seg++)
			{
			 gotoxy(21,8);
			 cout<<hora <<": "<<min <<": "<<seg  ;
			 

			 for (cont=0;cont!=100000000;cont++);

			 gotoxy(5,5);
                         cout<<"*======================================*";
			 gotoxy(5,6);
			 cout<<"[               MICROSOFT              ]";
			 gotoxy(5,7);
			 cout<<"[                                      ]";
			 gotoxy(5,8);
                         cout<<"[                                      ]";
			 gotoxy(5,9);
			 cout<<"[                                      ]";
			 gotoxy(5,10);
			 cout<<"[                                      ]";
			 gotoxy(5,11);
			 cout<<"*======================================*";

			 if(hora==24)
				{
				 hora=0;
                                }
			}
                }
	}
 }
