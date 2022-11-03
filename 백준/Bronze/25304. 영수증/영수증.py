x = int(input()) # 총 금액
n = int(input()) # 총 물건의 수

r = 0 

for i in range(n):
    a, b = map(int, input().split())
    r += a * b
    
if x == r: print("Yes")
else: print("No")
