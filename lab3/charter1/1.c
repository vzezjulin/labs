#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
 main(){
	setlocale(LC_ALL, "Russian");
	int n1,n,g,m; 
	printf("Введите n ");
	scanf(" %d",&m);
	printf("Введите первоначальное население ");
	scanf(" %d",&n);
	g=0;
	n1=3*n;

while (n<=n1){
		n=n+(n/m);
		g++;
		printf(" Год %d Население %d\n",g,n);
	
		
	}
printf("Население утроится через %d лет",g);

}
