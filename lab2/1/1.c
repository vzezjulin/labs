#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL, "Russian");

	double x1,y1,x2,y2,x3,y3;
	double a,b,c;
	
		printf("Введите координату x1:");
	scanf ("%lf",&x1);
	printf("Введите координату y1:");
	scanf ("%lf",&y1);
		printf("Введите координату x2:");
	scanf ("%lf",&x2);
	printf("Введите координату y2:");
	scanf ("%lf",&y2);
		printf("Введите координату x3:");
	scanf ("%lf",&x3);
	printf("Введите координату y3:");
	scanf ("%lf",&y3);
	
	a=(sqrt((pow(y2-y1,2))+(pow(x2-x1,2))));
	b=(sqrt((pow(y2-y3,2))+(pow(x3-x2,2))));
	c=(sqrt((pow(y3-y1,2))+(pow(x3-x1,2))));
		
	printf("a=%lf, b=%lf, c=%lf\n", a,b,c);
	
	if ((b==c)&& (c==a) )
		printf("Равносторонний");

	if  ((a>b) && (a>c)) {
		
		
		if	(a==(sqrt(pow(b,2) + pow(c,2))))
		printf("Прямоугольный");
			if  (  (a<(sqrt(pow(b,2) + pow(c,2))))   )
		  
			printf("Остроугольный");
				if (a>(sqrt(pow(b,2) + pow(c,2))))
				printf("Тупоугольный");
		
	}
	else 



	if ((b>a) && (b>c)){
		if	(b==(sqrt(pow(a,2) + pow(c,2))))
		printf("Прямоугольный");
				if (b<(sqrt(pow(a,2) + pow(c,2))))
				printf("Остроугольный");
					if (b>(sqrt(pow(a,2) + pow(c,2))))
					printf("Тупоугольный");
	
	}



	if ((c>a) && (c>b)){
		if	(c==(sqrt(pow(b,2) + pow(a,2))))
		printf("Прямоугольный");
				if (c<(sqrt(pow(b,2) + pow(a,2))))
				printf("Остроугольный");
					if (c>(sqrt(pow(b,2) + pow(a,2))))
					printf("Тупоугольный");
	
	}
	
return 0;
}
