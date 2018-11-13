#include <stdio.h>
#include <string.h>
#include <locale.h>
main()
{setlocale(LC_ALL,"RUSSIAN");
int i,n,j; 
printf("Введите количество строк:");
scanf("%d",&n);
char c[n][40]; 
FILE *F1,*F2;
if(!(F1=fopen("F1.txt","w+"))); 
printf("Введите строки:");
for(i=0;i<n;i++)
{scanf("%s",&c[i]);}
for(i=0;i<n;i++)
fprintf(F1,"%s\n",c[i]);
fclose(F1);
F2=fopen("F2.txt","w+");
for(i=1;i<n;i=i+2)
{fprintf(F2,"%s\n",c[i]);}
fclose(F2);
printf("Программа завершена.");
}
