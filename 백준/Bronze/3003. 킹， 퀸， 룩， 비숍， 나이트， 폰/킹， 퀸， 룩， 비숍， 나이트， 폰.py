chess = [1, 1, 2, 2, 2, 8] # 정해진 말의 수 배열

a = list(map(int, input().split())) # 많이 쓰인다고 하니, 기억해두자.
# 입력한 수를 리스트에 넣고, 정해진 말의 수로 뺀다. 
for i in range(6) :
  print(chess[i] - a[i], end= ' ')
