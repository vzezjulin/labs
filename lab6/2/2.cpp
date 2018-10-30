#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
#include <malloc.h>
int main()
{

  int *a;  // указатель на массив
  int i, j, n, m;
  int ab;
  system("chcp 1251");
  system("cls");
  n=3;
  m=4;
  setlocale(LC_ALL, "Russian");
  // Выделение памяти
  a = (int*)malloc(n*m * sizeof(int));
  // Ввод элементов массива
  for (i = 0; i<n; i++)  // цикл по строкам
  {
    for (j = 0; j<m; j++)  // цикл по столбцам
    {
      printf("a[%d][%d] = ", i, j);
      scanf("%d", (a + i*m + j));
    }
  }
  // Вывод элементов массива
  for (i = 0; i<n; i++)  // цикл по строкам
  {
    for (j = 0; j<m; j++)  // цикл по столбцам
    {
      printf("%5d ", *(a + i*m + j)); // 5 знакомест под элемент массива
    }
    printf("\n");
  }
  free(a);
  


ab=0;

if (((*(a+0))!=0)&&((*(a+4))!=0)&&((*(a+8))!=0))
	ab++;

if ((*(a+0*4+1)!=0)&&(*(a+1*4+1)!=0)&&(*(a+2*4+1)!=0))
	ab++;

if ((*(a+0*4+2)!=0)&&(*(a+1*4+2)!=0)&&(*(a+2*4+2)!=0))
	ab++;
	
if ((*(a+0*4+3)!=0)&&(*(a+1*4+3)!=0)&&(*(a+2*4+3)!=0))
	ab++;
	
	printf("Kolichestvo stolbtsov bez 0= %d ",ab);

		
	
	
}






