#include<stdio.h >
#include <stdlib.h>


int main()
{
 int Num=0,CantP=0,CantN=0,CantC=0,I=1;
 while(I<10)
 {
  printf("Ingrese un numero");
  scanf("%d",&Num);
  I=I+1;
  if (Num>0)
  {
  CantP=CantP+1;
  }
  else
  {
  	if (Num==0)
  	{
	 CantC=CantC+1;
	}
  else
  {
  	CantN=CantN+1;
  }}}
 printf("La cantidad de positivos es %d la de negativos es %d y la de ceros es %d",CantP,CantN,CantC);
return 0;
}

