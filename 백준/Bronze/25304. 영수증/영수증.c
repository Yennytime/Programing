#include <stdio.h>

/* 총 금액 = x, 구매한 물건의 수 = n,
각 물건의 가격 = a, 각 물건의 개수 = b */

int main() {
    int x, n, a, b;
    int res = 0; // res = result
        
        scanf("%d\n", &x);
        scanf("%d\n", &n);
    
    for (int i = 0; i < n; i++) { // i가 물건의 수보다 작으면, i + 1
        scanf("%d %d", &a, &b);
        res += a * b ; // a * b의 값을 결과값에 추가
    }
    
    if (x == res) printf("Yes"); // 총 금액이 결과값과 같으면 yes
    else printf("No");
        
        return 0;
}