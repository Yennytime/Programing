t = int(input()) # 테스트 케이스

for i in range(1, t+1): # 1 부터 t 까지의 숫자 범위
    a, b = map(int, input().split())
    # f-string은 소괄호를 입력해 괄호 안에 있는 변수, 변수를 연산한 값을 입력 가능
    # 소괄호 안의 수는 다양한 변수의 값이 출력 될 수 있음
    print(f"Case #{i}: {a+b}") 
