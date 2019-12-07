

import re
p = re.compile('[a-z]+')
# m = p.search('3 python')
# print(m)
m = p.match("python")
m.group()
m.start()
m.end()
m.span()

# data = """
# park 800905-1049118
# kim 700905-1059119
# """
# pat = re.complie("(\d{6})[-]\d{7}")
# print(pat.sub("\g<1>-*******", data))
