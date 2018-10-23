#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
 main(){
	setlocale(LC_ALL, "Russian");
	float x,y,r,g;
	r=1;
	printf("Координаты точки x и y:\n ");
	scanf("%f%f",&x,&y);
	g=sqrt((x*x) + (y*y));
	
	if (g>r)
	printf("Не принадлежит кругу\n");
	
	else 
	printf("Принадлежит кругу\n");

	
}
