#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
 main(){
	setlocale(LC_ALL, "Russian");
	int i,t,e;
	int a[5];
	int b[3];	

for(i=0; i<5; i++)  {
printf("a[%d] = ", i);
scanf("%d", &a[i]); 
}
for(i=0;i<5;i++)  {
printf("%d ",a[i]); 
} 
printf("\n");
printf("Новый массив: ");
t=-1;
if ((a[0]!=a[1])&&(a[0]!=a[2])&&(a[0]!=a[3])&&(a[0]!=a[4])){
	b[t+1]=a[0];
	t++;}	
		
if ((a[1]!=a[2])&&(a[1]!=a[3])&&(a[1]!=a[4])&&(a[1]!=a[0])){
	b[t+1]=a[1];
	t++;}
		
if ((a[2]!=a[3])&&(a[2]!=a[4])&&(a[2]!=a[0])&&(a[2]!=a[1])){
	b[t+1]=a[2];
	t++;}
	
if ((a[3]!=a[4])&&(a[3]!=a[0])&&(a[3]!=a[1])&&(a[3]!=a[2])){
	b[t+1]=a[3];
	t++;}
	
if ((a[4]!=a[1])&&(a[4]!=a[0])&&(a[4]!=a[2])&&(a[4]!=a[3])){
	b[t+1]=a[4];
	t++;}
else printf("Пуст");	
	for(e=0;e<t+1;e++)  {
printf("%d ",b[e]); 
} 

	}

