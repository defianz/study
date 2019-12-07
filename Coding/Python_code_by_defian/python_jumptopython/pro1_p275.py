
# result = 0
# for i in range(3, 1000, 3):
#     result += i
# for i in range(5, 1000, 5):
#     result += i

# print(result)

result = 0
for n in range(1, 1000):
    if n % 3 == 0 | n % 5 == 0:
        result += n

print(result)
