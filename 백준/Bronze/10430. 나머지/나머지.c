#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    // % 나머지 
    // 예시) a = 5 % 2; -> 5를 2로 나눈 나머지를 a에 넣는다.
    printf("%d\n", (a + b)%c);
    printf("%d\n", ((a%c) + (b%c))%c);
    printf("%d\n", (a * b)%c);
    printf("%d\n", ((a%c) * (b%c))%c);
           return 0;
}