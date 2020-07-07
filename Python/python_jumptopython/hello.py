# number = 10
# day = "three"
# print("I ate %d apple, so i was sick for %ss days" % (number, day))

# print("Error is %d%%" % 98)

# print("%-10s jane." % "hi")


# print("%0.4f" % 3.42134234)


# a = 'hobby'
# print("%d" % a.count('b'))

# a = "python  is bestb choice"
# print("%d" % a.find('k'))
# printf("%d" % a.index('k'))


a = '       Life is to short    '
print(a.lstrip())
print(a.rstrip())
b = ','
print(b.join(a.replace("Life", "fuck").lstrip().split(",")))


print("I eat {0} and fuck {1}".format(1, 2))

print("i ate {0} and fuck {number}".format(5, number=3))

print("{0:>10}".format("hi"))

print("{0:ㅗ^10}".format("hi"))

# 02-3 리스트 자료형
odd = [1, 3, 5, 7, 9]
a = [1, 2, 3, ['a', 'b', 'c']]

a.str()+a[3][1]

#
