f=open("C:/Users/KimHyungChul/Desktop/새파일.txt",'a')
for i in range(11,20):
    data = '%d번쨰 줄입니다.\n'%i
    f.write(data)

f.close()
