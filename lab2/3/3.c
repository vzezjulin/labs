#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
 main(){
	setlocale(LC_ALL, "Russian");
	int i;
	printf("������� ���� ����:\n 1.����\n 2.�����\n 3.����\n 4.�����\n");
	scanf("%d",&i);
	switch(i){
		case 1:
	printf("�������, ������, �������");
	break;
		case 2:
	printf("����, ������, ���");
	break;
		case 3:
	printf("����, ����, ������");
	break;
		case 4:
	printf("��������, �������, �������");
	break;}

}
