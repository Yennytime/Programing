#include <stdio.h>

int main(){
    int n; // n개의 정수
    int arr[100];
    int v; // 정수 v가 몇개 있는지
    int count = 0; // 개수 카운트
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]); // arr[i] = arr[i = 0; i < n; i++]
       }
    scanf("%d", &v);
    
    for (int j = 0; j < n; j++) {
        if (arr[j] == v) // 입력 받은 수 중에서 v와 같으면
                count++; // count
    }
    printf("%d", count);
}