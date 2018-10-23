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

printf("MATRICA: \n");
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
printf("%.0f   ", b[i][j]);
printf("\n");
}


if ((b[0][0]>=0)&&(b[0][1]>=0)&&(b[0][2]>=0)){
	a=b[0][0]+b[0][1]+b[0][2];
	printf("Summa elementov 1 stroki=%d\n",a);}
if ((b[1][0]>=0)&&(b[1][1]>=0)&&(b[1][2]>=0)){
	a=b[1][0]+b[1][1]+b[1][2];
	printf("Summa elementov 2 stroki=%d\n",a);}
if ((b[2][0]>=0)&&(b[2][1]>=0)&&(b[2][2]>=0)){
	a=b[2][0]+b[2][1]+b[2][2];
	printf("Summa elementov 3 stroki=%d\n",a);}
	
c=b[0][1]+b[1][2];
e=b[1][0]+b[2][1];
if (c<e) printf("Минимум  среди сумм элементов диагоналей, параллельных главной диагонали матрицы равен %d\n",c);
else printf("Минимум  среди сумм элементов диагоналей, параллельных главной диагонали матрицы равен %d\n",e);	
	
	
}




	


