#include <stdio.h>
int main(){
    char id[50];
    scanf("%s", &id);
    // %s - 문자열을 출력
    printf("%s?\?!", id);
    // 백슬래시는 삼중자로 인식하는 걸 막기때문에, ??! -> 문장부호 | 가 아닌, ??!로 출력 가능
    // 삼중자는 자주 쓰지 않는 문자의 조합으로 다른 문자를 표현 - ??으로 시작
    return 0;
}