

def convert(tmp):
    result = ""
    cnt = 0
    pre = ""
    for i in tmp:
        if i == pre:
            cnt += 1
        else:
            if cnt != 0:
                result += pre
                result += str(cnt)
                pre = i
                cnt = 1
            else:
                pre = i
                cnt = 1
        
    result+=pre
    result+=str(cnt)
    print(result)


a = input()
convert(a)
