

def confirm(lines):
    result = []
    for i in list(lines.split(" ")):
        tmp = set(i)
        if(len(tmp) != 10 | len(i) != 10):
            result.append("false")
        else:
            result.append("true")
    print(result)


lines = input()
confirm(lines)
# print(lines)

#print(list(lines.split(" ")))
