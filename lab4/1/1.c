#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
 main(){
	setlocale(LC_ALL, "Russian");
	int i;
	int a[5];	

for(i=0; i<5; i++)  {
printf("a[%d] = ", i);
scanf("%d", &a[i]); 
}
for(i=0;i<5;i++)  {
printf("%d ",a[i]); 
} 
printf("\n");
printf("”никальный элемент(ы): ");
if ((a[0]!=a[1])&&(a[0]!=a[2])&&(a[0]!=a[3])&&(a[0]!=a[4]))
		printf(" %d ",a[0]);	
		
if ((a[1]!=a[2])&&(a[1]!=a[3])&&(a[1]!=a[4])&&(a[1]!=a[0]))
		printf(" %d ",a[1]);	
		
if ((a[2]!=a[3])&&(a[2]!=a[4])&&(a[2]!=a[0])&&(a[2]!=a[1]))
		printf(" %d ",a[2]);	
	
if ((a[3]!=a[4])&&(a[3]!=a[0])&&(a[3]!=a[1])&&(a[3]!=a[2]))
		printf(" %d ",a[3]);
		
if ((a[4]!=a[1])&&(a[4]!=a[0])&&(a[4]!=a[2])&&(a[4]!=a[3]))
		printf(" %d ",a[4]);

	}


