#include<conio.h>
#include<stdio.h>
#include<iostream.h>

//Considerando los datos de una persona (nombre, apellido, DNI, dirección, edad) como campos de un registro;
//ingresar esos datos desde teclado para 150 personas. Almacenar los datos en un arreglo de registros y
//luego mostrar en pantalla los nombres y apellidos de las personas que tienen menos de 15 años

struct registro         
{                      
 long edad,dni;
 char nombre[20],apellido[20],direc[100];
};
registro censo[5];

long i,m,aux;

void main()
{

 for(i=0;i<5;i++)
   {
    cout<<"\tPLANILLA DE PREGUNTAS ";

    cout<<"\nNombre:  ";
    cin>>censo[i].nombre;
    cout<<"Apellido:  ";
    cin>>censo[i].apellido;
    cout<<"DNI:  ";
    cin>>censo[i].dni;
    cout<<"Edad:  ";
    cin>>censo[i].edad;
    cout<<"Direccion de vivienda:  ";
    gets(censo[i].direc);

    cout<<"\n\nPara continuar presione cualquier tecla";
    getche();
    clrscr();   
   }

 cout<<"\Para ver los nombres y apellidos de las personas que tienen menos de 15 años nuevamente presio cualquier tecla";
 getche();
 clrscr();

 for(i=0;i<5;i++)
        	{
		 if(censo[i].edad<15)
			{
			 cout<<"\nEl/La joven censado/a "<<censo[i].nombre<<"  "<<censo[i].apellido<<" tiene: "<<censo[i].edad<<" años";
			 getche();
                        }
		}
 
}

