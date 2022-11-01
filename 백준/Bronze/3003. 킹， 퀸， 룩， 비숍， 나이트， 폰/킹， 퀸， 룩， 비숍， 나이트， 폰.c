#include <stdio.h>

int main() {

    int arr[7] = { 1, 1, 2, 2, 2, 8 };
    int a;

    for (int i = 0; i < 6; i++) {
    // int i = 0, i 가 6보다 작으면 i 값을 4증가
        scanf("%d", &a);
        // a를 10진수 정수로 변환
        printf("%d ", arr[i] - a);
    }

    return 0;
}
