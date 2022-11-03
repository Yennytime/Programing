import sys # stdin.readline 함수를 사용하기 위해 sys 모듈 불러옴

t = int(sys.stdin.readline()) # int(input())과 동일하지만, 입력받은 문자는 숫자로 입력해도 문자열로 입력받음

for i in range(t):
    a, b = map(int, sys.stdin.readline().split())
    print(a+b)
