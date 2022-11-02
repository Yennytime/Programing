#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    if(a>b) { 
        printf(">");
    } else if(a<b) {
        printf("<");
    } else if(a==b) {
        printf("==");
    }
    // else는 if 이외에 모든것
    // else if는 if문이 아닐 때
    return 0;
}