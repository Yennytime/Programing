#include <stdio.h>
int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    // 콘솔창에서 변수에 값을 입력하는 함수 (입력 함수)
    // 변수 a와 b의 주소에 접근해서 정수형 데이터를 입력
    // &는 변수의 주소에 접근하는 기호
    printf("%d", a + b);
    return 0;
    }