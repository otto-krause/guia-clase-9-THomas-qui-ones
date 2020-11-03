#include<stdio.h >
#include <stdlib.h>


int main()
{
 int Num=0,Num2=0,P=1,I=1;
 printf("Ingrese base");
 scanf("%d",&Num);
 printf("Ingrese exponente");
 scanf("%d",&Num2);
 while(I<=Num2)
 {  
  P=P*Num;
  I++;
 }
 printf("El total es %d\n",P);
return 0;
}

