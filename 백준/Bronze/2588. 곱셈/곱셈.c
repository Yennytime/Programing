#include <stdio.h>
int main(){
    int a, b, num1, num2, num3;
    // 값을 받을 변수들의 자료형 선언
    scanf("%d", &a, sizeof(a));
    scanf("%d", &b, sizeof(b));
    // sizeof() : 표현식 형식, 자료형의 크기를 구할 수 있다.
    // 여기선, a와 b의 크기를 구한다.
    
    num1 = b / 100;
    num2 = (b / 10) % 10;
    num3 = b % 10;
    // b를 각 자리수에 따라 나눈다.
    
    printf("%d\n", a * num3);
    printf("%d\n", a * num2);
    printf("%d\n", a * num1);
    printf("%d", a * b);
    // 각 자리수에 맞춰서 a와 곱하고 출력
    // 최종 곱은 a * b 로 출력
    
    return 0;
   
}