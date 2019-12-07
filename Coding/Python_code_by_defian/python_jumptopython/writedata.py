f=open("C:/Users/KimHyungChul/Desktop/새파일.txt","w")
for i in range(1,11):
        data = "%d번째 줄 입니다.\n"%i
        f.write(data)
    
f.close()