#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL,"Russian");
	int z;
	float x, y, a, b, c, e,s;
	printf("¬ведите x: ");
scanf("%f",&x);
	printf("¬ведите y: ");
scanf("%f",&y);	
	printf("¬ведите z: ");
scanf("%d",&z);
e=-sqrt(fabs(x));
a=log(pow(y,e));
b=x-y/2;
c=sin(atan(z));

s=a*b+c*c;
printf("–езультат s=%.3f ",s);
	return 0;
}
