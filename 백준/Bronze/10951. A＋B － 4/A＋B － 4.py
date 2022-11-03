while True:
    try: # 에러가 발생 가능성이 있는 코드를 작성
        a, b = map(int, input().split())
    except: # 예외 발생 시 실행할 코드를 작성
       break # 여기선 break
    print(a + b)
