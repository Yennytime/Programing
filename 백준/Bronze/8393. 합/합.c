#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int sum = 0; // 합계는 0으로 선언
    for (int i=1; i<n+1; i++) { // 1부터 n까지의 합을 계산해줘야 됨
        sum += i; // i를 sum값에 더한다.
    }
    printf("%d\n", sum);
}