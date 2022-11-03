n = int(input()) # n개의 정수
l = list(map(int, input().split())) # 정수 l
v = int(input()) # 찾아야하는 정수 v

print(l.count(v)) # l 중에 v가 몇개인지 출력

# count : 매개변수로 입력된 값이 리스트 안에 몇개 있는지 세어 반환
