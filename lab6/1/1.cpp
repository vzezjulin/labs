#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


 main()
{ 
int *b,  j,  buf;
setlocale(LC_ALL, "Russian");

int *ptr, i, n;
do{
printf("Vvedite kol-vo elementov massiva (<30)\n");
scanf("%d",&n); 
} while (n>=30);
if(!(ptr=(int*)malloc(n*sizeof(int)))) //���������� ������ 
{  puts("Not enough memory"); // ��������� ���������� 
getch(); // �� ������

} 
//ptr ��������� �� ������ �� n ���������
for (i=0;i<n;i++){ 

printf("Vvedite element [%d]\n", i+1);
scanf("%d",ptr+i); 
}
printf("\nMassiv: \n", i+1);
for (i=0;i<n;i++)
printf("%d ", *(ptr+i));



for (i=0; i<n; i++)
for (j=0; j<n-i-1; j++)
if (*(ptr+j)>*(ptr+j+1))
{
buf=*(ptr+j); 
*(ptr+j)=*(ptr+j+1);
*(ptr+j+1)=buf;
}
for (i=0;i<n;i++)



*(ptr+0)=*(ptr+0)*(-1);
if (*(ptr+0)>*(ptr+n-1)) printf("  \n������������ �� ������ ������� ������� %d",*(ptr+0)*(-1));
else printf("  \n������������ �� ������ ������� ������� %d",*(ptr+n-1));

} 
