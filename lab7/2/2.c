#include <stdio.h>
#include <string.h>
char maximum() ; // прототип функции
char s[100];
int main()
{
printf("Vvedite stroku: ");
  
  maximum();
}
// Определение функции maximum 
char maximum() 
{ char s[100];
    int i, id, max, count, len;
    gets(s);
    len = strlen(s);
    max = 0;
    id = 0;
    count = 0;
 for (i=0; i<len; i++)
        if (s[i] != ' ') count += 1;
        else {
            if (count > max) {
                max = count;
                id = i - count;
            }
            count = 0;
        }
 
    if (count > max) {
        max = count;
        id = i - count;
    }
    max += id;
    
printf("Slovo maksimalnoi dlyni: ");
    for (i=id; i<max; i++)
        putchar(s[i]);
}
