#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void mas();
int i,j,k;
float A[3][4]={{0.42,-1.13,7.05,6.15},
			   {1.14,-2.15,5.11,-4.16},
			   {-0.71,0.81,-0.02,-0.17}};
float B[3], abc;			
main(){
setlocale(LC_ALL,"Russian");
for(i=0;i<3;i++){
abc=A[i][i];	
for(j=3;j>=4;j--)
A[i][j]/=abc;}
for(i=0;i<3;i++){
abc=A[i][i];
for(j=3;j>=i;j--)
A[i][j]/=abc;
for(j=i+1;j<3;j++){
abc=A[j][i];
for(k=3;k>=i;k--)
A[j][k]-=abc*A[i][k];}}
B[2]=A[2][3];
for(i=1;i>=0;i--)
{B[i]=A[i][3];
for(j=i+1;j<3;j++)
B[i]-=A[i][j]*B[j];}
for(i=0;i<3;i++)
{printf("X%d = %.6f\n",i+1,B[i]);}}
void mas()
{int i,j;
for(i=0;i<3;i++)
{for(j=0;j<4;j++)
{if(j==3)
printf(" = %5.2f", A[i][j]);
else
printf("%5.2fx%d", A[i][j],j+1);}
printf("\n\n");	}}
