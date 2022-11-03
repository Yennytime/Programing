n = int(input()) # 1 < n < 100

for i in range(1, n+1):
    print(" " * (n - i) + "*" * i) # 별의 개수는 i에 차례대로 1부터 n까지 출력, 빈칸 개수는 n-i만큼 출력
