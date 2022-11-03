#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b); // 순서대로 a + b 출력
    }
    return 0;
}