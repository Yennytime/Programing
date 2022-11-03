#include <stdio.h>
int main() {
    int a, b;
    while(1) { // while(1)은 항상 참 -> while문 안에 있는 코드들은 무한루프
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) break; // 입력이 0 0 들어왔을때, 루프를 멈춤
        printf("%d\n", a+b);
    }
    return 0;
}