#include<stdio.h >
#include <stdlib.h>


int main()
{
 int Num=0,F=1,I;
 printf("Ingrese un numero");
 scanf("%d",&Num);
 I=1;
 do
 {  
  F=F*I;
  I=I+1;
 }
 while (I<=Num);
 printf("El factorial es %d\n",F);
return 0;
}

