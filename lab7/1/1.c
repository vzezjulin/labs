#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
int x[50][50];
void vvod(int x[50][50], int n1,int m1);
int vivod(int x[50][50], int n1, int m1);
int prekol(int x[50][50], int n1, int m1);
int main()
{ int n,m;
printf("vvedite n\n");
scanf("%d",&n);
printf("vvedite m\n");
scanf("%d",&m);
vvod(x, n, m);
vivod(x, n, m);
prekol(x, n, m);
}
void vvod(int x[50][50], int n1, int m1)
{ int z,j;
for (z=0;z<n1;z++)
for (j=0;j<m1;j++){
printf("Vvedite element [%d,%d]\n", z+1, j+1);
scanf("%d",&x[z][j]);
}
}
int vivod(int x[50][50], int n1, int m1)
{ int z,j;
printf("\n");
for (z=0;z<n1;z++){
for (j=0;j<m1;j++)
printf("%d ", x[z][j]);
printf("\n");
}
return 0;
}

int prekol(int x[50][50], int n1, int m1)
{int z,j;
printf("\n");
printf(" Stroka soderzaschaia Polosjitelniy element:  ");
for (z=0;z<n1;z++){
for (j=0;j<m1;j++)
if (x[z][j]>0)
printf("  %d ",z+1);
}
return 0;
}
