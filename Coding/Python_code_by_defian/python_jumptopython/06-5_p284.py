
import sys

src = sys.argv[1]
dst = sys.argv[2]

f1 = open(src, 'r')
tab_content = f1.read()
f1.close()

space_content = tab_content.replace("\t", " "*4)
print(space_content)
f2 = open(dst, 'w')
f2.write(space_content)
f2.close()
