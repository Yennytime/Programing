A, B, C = map(int,input().split())
# input() : 입력받을 때 문자열로 입력 받음 > int 타입으로 변환

print((A+B)%C, ((A%C)+(B%C))%C, (A*B)%C, ((A%C)*(B%C))%C, sep='\n') # sep='\n': 줄 바꿈
