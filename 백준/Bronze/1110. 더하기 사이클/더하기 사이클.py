n = int(input())

m = n # m 변수에 n을 지정
cnt = 0

while True:
    sum_n = (m // 10) + (m % 10)
    new_n = ((m % 10) * 10) + (sum_n % 10)
    cnt += 1
    if new_n == n:
        break
    
    m = new_n # m 변수에 last_n을 지정
print(cnt)
       # 어렵다 어려워..
