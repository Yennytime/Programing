#include <stdio.h>
int main() {
    int a, b;
    while(scanf("%d %d", &a, &b)!=EOF) {
        // EOF : End Of File (-1), 파일의 끝을 표현하기 위한 상수
        // scanf("%d %d", &a, &b)!=EOF : 파일의 끝에 도달할 때 까지 while문을 실행
        printf("%d\n", a + b);
        
    }
}