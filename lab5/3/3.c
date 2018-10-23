
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
 main(){
	setlocale(LC_ALL, "Russian");
int i,j,n,m,N,a,c,e;
int o;
float b[3][3];

for (i=0;i<3;i++)
for (j=0;j<3;j++)
{
printf("Vvedite element [%d,%d]\n", i+1, j+1);
scanf("%f",&b[i][j]);
}

printf("\nMATRICA PERVONACHALNAIA: \n");
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
printf("%.0f   ", b[i][j]);
printf("\n");
}

printf("Polosjitelniy element: ");
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
if (b[i][j]>0){
printf("b[%d][%d];", i+1,j+1);
b[i-1][0]=b[i-1][0]*(-1);
b[i-1][1]=b[i-1][1]*(-1);
b[i-1][2]=b[i-1][2]*(-1);
}	
}
printf("\nMATRICA ITOG: \n");
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
printf("%.0f   ", b[i][j]);
printf("\n");
}
}

