#include <stdio.h>
#include <stdlib.h>


int main()
{
  int i=0,a=1,Num1=0,p=0,U=0,VGen=0;
do
{
    U=0;
    printf ("El vendedor: %d \n",a);
    printf ("Ingresar las unidades vendidas  \n");
    a++;
    i=0;
    p=0;
do
{
    printf (" venta del día  %d\n",i+1);
    scanf ("%d",&U);
    p=p+U;
  if (p > Num1)
        Num1=p;
        i ++;
}
while(i<15);
VGen=VGen+p;
printf ("EL total  de unidades vendidas  del vendedor  %d",a-1);
printf (" es %d \n",p);
       }
while (a<21);
printf("La venta general es %d y la mejor venta es por %d",VGen,Num1);
return 0;
}
