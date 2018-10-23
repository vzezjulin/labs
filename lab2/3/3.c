#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
 main(){
	setlocale(LC_ALL, "Russian");
	int i;
	printf("Введите пору года:\n 1.Зима\n 2.Весна\n 3.Лето\n 4.Осень\n");
	scanf("%d",&i);
	switch(i){
		case 1:
	printf("Декабрь, Январь, Февраль");
	break;
		case 2:
	printf("Март, Апрель, Май");
	break;
		case 3:
	printf("Июнь, Июль, Август");
	break;
		case 4:
	printf("Сентябрь, Октябрь, Декабрь");
	break;}

}
