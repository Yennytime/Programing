#include <stdio.h>
int main(){
    // 0 <= n <= 99
    int n, m; // m은 계산 결과값을 담을 임시 변수
    int a, b, c;
    int res, count=0;
    
    scanf("%d", &n);
    
    m = n; // m값을 n에 대입
    
    while(1)
    { // 십의 자리와 일의 자리를 분리
        a = m / 10;
        b = m % 10;
        c = (a + b) % 10;
        
        count++;
        
        res = (b * 10)+ c;
        m = res;
        if (res == n)
            break;
    }
    printf("%d\n", count);
}