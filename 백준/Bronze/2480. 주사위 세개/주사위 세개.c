#include <stdio.h>
int main() {
    int a, b, c; // 주사위 3개
    scanf("%d %d %d", &a, &b, &c);
    
    // a,b,c가 같은 눈이 나온 경우, 
    if (a == b && b == c) printf("%d", 10000 + a*1000);
    // a,b가 같은 눈이 나온 경우,
    else if (a == b) printf("%d", 1000 + a*100);
    // b,c가 같은 눈이 나온 경우,
    else if (b == c) printf("%d", 1000 + b*100);
    // a,c가 같은 눈이 나온 경우,
    else if (c == a) printf("%d", 1000 + c*100);
    // 그 외
    else {
        if (a > b && a > c) printf("%d", a*100);
        else if (b > c) printf("%d", b*100);
        else printf("%d", c*100);
    }
    return 0;
}