#include <stdio.h>
int main(){
    int n; // 총 별의 개수
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) { // 출력할 별의 개수
        for (int j = 1; j <= n; j++){ 
            if (j <= n - i) printf(" "); // 총 별의 개수 - 출력할 별의 개수 = 빈칸
            else printf("*"); 
        }
        printf("\n");
    }
    return 0;
}