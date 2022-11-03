n, x = map(int,input().split())
a = list(map(int,input().split())) # 수열 a (일정한 규칙에 따라 한 줄로 배열된 수의 열.)
for i in a: # Ex) a[1] < x, a[2] < x, a[3] < x ... 반복되며,
    if i < x: # 참일 경우, 출력
        print(i, end=" ") # end=" " : 한 칸 공백
