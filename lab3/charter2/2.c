#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

 
int main() {
    double pi = 1, num = 3;
    for(int i = 0; i < 500; i++) {
        if(i % 2 != 0) {
            pi += 1/num;
        } 
		else {
            pi -= 1/num;
        }
        num += 2;
    }
    pi=pi*4;
    printf("%f",  pi);
    
    return 0;
}
