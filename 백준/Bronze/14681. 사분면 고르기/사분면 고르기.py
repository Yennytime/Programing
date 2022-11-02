x = int(input())
y = int(input())

if x > 0 and y > 0 : # 양수, 양수
    print("1")
elif x < 0 and y > 0 : #음수, 양수
    print("2")
elif x < 0 and y < 0 : # 음수, 음수
    print("3")
else: # 양수, 음수
    print("4")
