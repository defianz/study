
f=open("C:/Users/KimHyungChul/Desktop/sample.txt",'r')

lines=f.readlines()

tsum = 0
tlen = 0

for line in lines:
    tsum += int(line)
    tlen += 1

f.close()

tavg = tsum/tlen

f=open("C:/Users/KimHyungChul/Desktop/result.txt",'w')
f.write(str(tavg))
f.close()