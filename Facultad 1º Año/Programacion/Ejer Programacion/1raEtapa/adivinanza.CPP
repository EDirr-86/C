#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
void main()
{

  int i,a,b;

randomize();
clrscr();
 a = random(50);

  cout<<"A D I V I N A N Z A S\n";
  cout<<"Adivina el número que estoy pensando\n";
  for (i=1;i<9;i++)

   {
    cin>>b;
    if (b==a)
     {
      cout<<"Muy bien, has acertado en "<<i<<" oportunidades \n";
      break;
     }
    else
       {
        if(b>a)
           cout<<"Es alto\n";
        else
             cout<<"Es bajo\n";
       }
    }
    if (b != a){
      cout<<"Lo siento, el número es: "<<a;
    }
}
