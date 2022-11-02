a, b, c = map(int, input().split())

if(a == b):
    if(a == c):
        print(10000+a*1000)
    else:
        print(1000+a*100)
            
elif(a != b):
    if(a == c):
        print(1000+a*100)
    elif(b == c) :
        print(1000+b*100)
    else:
        if(a >= b and a >= c): # a가 가장 큰 경우
            print(a*100)
        elif(b >=a and b >= c):
            print(b*100)
        else:
            print(c*100)
