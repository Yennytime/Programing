#include <stdio.h>
int main(){
    // T = 테스트 케이스, a & b = 각 줄에 주어짐 (0 < a, b < 10)
    int t, a, b;
    scanf("%d", &t);
    
    for (int i = 1; i <= t; i++) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
    }
    return 0;
}