#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL,"Russian");
	float x,y,z;
	printf("������� ����� x: ");
	scanf("%f",&x);
	z=pow(x,8);
	y=2*z;
	printf("��������� %f\n",y);
	return 0;
}
