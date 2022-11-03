#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++){ // 몇 번 반복할지 선언
        for (int a = 1; a <= i; a++) { // 문자 *의 출력 횟수 
            printf("*");
        }
        printf("\n");
    }
    return 0;
}