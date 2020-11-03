#include<stdio.h >
#include <stdlib.h>


int main()
{
 int I=0;
 float Num, NM, Pro,Total; 
 while(I<15)
 {printf("ingrese un numero");
  scanf("%f",&Num);
  Total=Total+Num;
  I=I+1;
  if (Num>NM)
  {
	NM=Num;	 }
 }
 Pro=Total/15;
 printf("El valor promedio es %f\n", Pro);
 printf("El valor mayor %f", NM);
return 0;
}

