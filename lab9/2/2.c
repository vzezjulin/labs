#include<stdio.h> 
#include<conio.h> 
#include<locale.h>
#include<string.h>
char vivod();
char add();
char poisk(char *n);

struct chitatelb
{
char fam[30]; 
char name[20]; 
char number[20];
char nazvanie[30];
char srok[30];
}; 
struct chitatelb ch[30];
int records;
int i, j,k,k1;
char n[20];

int main()
{
setlocale(LC_ALL, "rus");
FILE *f;
    if(!(f = fopen("chitatelb.txt", "w+b"))) {
    printf("���������� ������� ����\n");
    return 0;
    }
 records=0;
do
{add();
puts("�������� ��� ? (1/0)");
scanf("%d", &i);} 
while(i);
do {
     printf("1-�����\n2-��������\n3-�����\n�����\n");
     scanf("%d",&k);
switch(k){
	case 1:
		vivod();
		break;
	case 2:
		add();
		break;
	case 3:
		printf("������ ���:\n");
		scanf("%s",&n);
		poisk(n);
	case 4:
		break;
}
printf("����������? (1/0)\n");
scanf("%d",&k1);}
while(k1);}
char vivod(){	FILE *f;	int i;
    printf("\n������:\n");
    if(!(f=fopen("chitatelb.txt","r")))
    { printf("������ �������� �����\n"); return 0;}
    for(i=0;i<records;i++)
    { puts(ch[i].fam);puts(ch[i].name);puts(ch[i].number);puts(ch[i].nazvanie);puts(ch[i].srok);
    printf("\n\n");}
fclose(f);}
char add(){    FILE *f;	int i;
	if(!(f = fopen("chitatelb.txt", "a+"))) {
    printf("���������� ������� ����\n");
    return 0;}
{printf("������� ����� %d\n",records+1);
puts("�������");
fflush(stdin);
gets(ch[records].fam);
fputs(ch[records].fam,f);
fprintf(f,"  ");
 
puts("���");
fflush(stdin);
gets(ch[records].name);
fputs(ch[records].name,f);
fprintf(f,"  ");
	 
puts("�����");
fflush(stdin);
gets(ch[records].number);
fputs(ch[records].number,f);
fprintf(f,"  ");
	
puts("�������� �����");
fflush(stdin);
gets(ch[records].nazvanie);
fputs(ch[records].nazvanie,f);
fprintf(f,"  ");
 
puts("���� �����");
fflush(stdin);
gets(ch[records].srok);
fputs(ch[records].srok,f);
fprintf(f,"  ");

fprintf(f,"\n");
records++;}
fclose(f);}
char poisk(char *n){	FILE *f;
	if(!(f = fopen("chitatelb.txt", "r"))) {
    printf("���������� ������� ����\n");
    return 0;}
for(i=0; i<records;i++)
{if (!strcmp(ch[i].name,n))
{printf("\n\n�������: %s \n",ch[i].fam);
printf("���: %s \n",ch[i].name);
printf("�����: %s \n",ch[i].number);
printf("���� �����: %s \n",ch[i].nazvanie);
printf("���� �����: %s \n",ch[i].srok);}
else 
printf("\n\n");}
fclose(f);}
