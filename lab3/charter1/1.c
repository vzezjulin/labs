#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
 main(){
	setlocale(LC_ALL, "Russian");
	int n1,n,g,m; 
	printf("������� n ");
	scanf(" %d",&m);
	printf("������� �������������� ��������� ");
	scanf(" %d",&n);
	g=0;
	n1=3*n;

while (n<=n1){
		n=n+(n/m);
		g++;
		printf(" ��� %d ��������� %d\n",g,n);
	
		
	}
printf("��������� �������� ����� %d ���",g);

}
