#include <stdio.h>

int main() {
    int y;
    scanf("%d", &y);
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        // "&&" -> and
        // != -> 두 연산자 값이 같지 않으면 (비교)
        // "||" -> or
        printf("1");
    else printf("0");
    
    return 0;
}