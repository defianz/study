

import re


data = """
park 010-9999-9988
kim 010-9909-7789
lee 010-8789-7768
"""

p = re.compile("(010-[0-9]{4}[-])[0-9]{4}")
# m = p.search(data)
# print(m)
# print(m.group(1))
print(p.sub("\g<1>####", data))
# m = p.findall(data)
# print(m)
