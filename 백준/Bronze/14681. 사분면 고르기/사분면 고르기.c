#include <stdio.h>

int main() {
    int x, y; // 좌표
    scanf("%d %d", &x, &y);
    
    if (x > 0 && y > 0) printf("1"); // 양수, 양수
    if (x < 0 && y > 0) printf("2"); // 음수, 양수
    if (x < 0 && y < 0) printf("3"); // 음수, 음수
    if (x > 0 && y < 0) printf("4"); // 양수, 음수
    
    return 0;
}