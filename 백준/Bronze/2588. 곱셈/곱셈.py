a = int(input()) # 첫번째 입력받은 문자 -> 숫자로 변환 (int)
b = input() # 두번째 입력받은 문자 -> 문자열 유지

# 문자열의 인덱스를 이용해 두번째 입력받은 문자를 하나씩 숫자로 반환 후 * a
axb2 = a * int(b[2])
axb1 = a * int(b[1])
axb0 = a * int(b[0])
axb = a * int(b)

print(a*b2, a*b1, a*b0, a*b, sep='\n')
