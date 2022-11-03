#include <stdio.h>
int main() {
    // 테스트 케이스 t, 각 줄에 a, b (0 < a, b < 10)
    int t, a, b;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        scanf("%d %d", &a, &b);
        if (0 < a && b < 10) printf("Case #%d: %d\n", i, a + b);
    }
    return 0;
}