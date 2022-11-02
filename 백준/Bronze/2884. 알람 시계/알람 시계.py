H, M = map(int, input().split()) # hrs, mins

if M < 45 :	# if mins is less than 45 
    if H == 0 :	# if hrs is 0
        H = 23 # 24 - 1 = 23
        M += 60 # + 60 = mins
    else : # if hrs isn't 0 or more than 0
        H -= 1 # H - 1
        M += 60
        
print(H, M-45) # if mins is more than 45 -> M - 45
