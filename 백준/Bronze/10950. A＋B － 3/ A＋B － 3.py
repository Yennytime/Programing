t = int(input())

for i in range(t) : # t만큼 반복, (t)를 입력해주었기에 숫자 범위는 0부터 t - 1
    a, b = map(int, input().split())
    print(a + b)
