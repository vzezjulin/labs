#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
 main(){
	setlocale(LC_ALL, "Russian");
int i,j,n,m,N,a,c,e;
int o;
float b[3][4];

for (i=0;i<3;i++)
for (j=0;j<4;j++)
{
printf("Vvedite element [%d,%d]\n", i+1, j+1);
scanf("%f",&b[i][j]);
}

printf("MATRICA: \n");
for (i=0;i<3;i++)
{
for (j=0;j<4;j++)
printf("%.0f   ", b[i][j]);
printf("\n");
}
a=0;

if ((b[0][0]!=0)&&(b[1][0]!=0)&&(b[2][0]!=0))
	a++;

if ((b[0][1]!=0)&&(b[1][1]!=0)&&(b[2][1]!=0))
	a++;

if ((b[0][2]!=0)&&(b[1][2]!=0)&&(b[2][2]!=0))
	a++;
	
if ((b[0][3]!=0)&&(b[1][3]!=0)&&(b[2][3]!=0))
	a++;
	
	printf("Количество столбцов, не содержащих ни одного нулевого элемента равно %d ",a);

		
	
	
}



