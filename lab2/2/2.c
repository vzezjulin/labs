#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
 main(){
	setlocale(LC_ALL, "Russian");
	float x,y,r,g;
	r=1;
	printf("���������� ����� x � y:\n ");
	scanf("%f%f",&x,&y);
	g=sqrt((x*x) + (y*y));
	
	if (g>r)
	printf("�� ����������� �����\n");
	
	else 
	printf("����������� �����\n");

	
}
