#include <stdio.h>

// x 보다 작은 수를 입력받은 순서대로 공백으로 구분해 출력, x보다 작은 수는 적어도 하나가 존재.
// n 번의 입력을 받아 x보다 작은 수를 출력해야 함 !! 입력 받자마자 출력 !!

int main(){
    int N, X, input;

    scanf("%d %d", &N, &X);

    for(int i=0; i<N; i++){
        scanf("%d", &input);
      
        if(X>input)
            printf("%d ", input);
    }
}