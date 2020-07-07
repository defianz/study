



f=open("C:/Users/KimHyungChul/Desktop/새파일.txt",'r')


while True:
    line = f.readline()
    print(line)
    if not line: break
    


f.close()