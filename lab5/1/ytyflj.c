#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 main()
{ 
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
for (i=0;i<n;i++)
{ 

printf("Vvedite element [%d]\n", i+1);
scanf("%d",ptr+i); 
}
printf("\nMassiv: \n", i+1);
for (i=0;i<n;i++)
printf("%d ", *(ptr+i));
}
