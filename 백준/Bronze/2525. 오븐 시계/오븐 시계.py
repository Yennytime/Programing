A, B = map(int, input().split())
C = int(input())

h = (B+C)//60
m = (B+C)%60

if(B + C >= 60):
  if(A+h >= 24):
    A = A - 24 # A의 값이 24시가 되면 0으로 초기화 되기때문에 빼준다
  A = A + h # A + (B+C)//60의 값 
  print(A, m)

else:
  if(A >= 24):
    A = A - 24
  print(A, B+C)
