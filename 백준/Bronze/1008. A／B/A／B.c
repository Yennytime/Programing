#include <stdio.h>
int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%.9f\n", (double) a / b);
        // %.9f : 소수점 아래 9자리에서 끝자리 반올림
        return 0;
}