


class HousePark:
    lastname = "박"
    def __init__(self,firstname):
        self.fullname = self.lastname+ firstname
    def travel(self,place):
        print("%s, %s여행을 가다." %(self.fullname,place))
    def love(self,other):
        print("%s, %s 사랑에 빠졌네" %(self.fullname,other.fullname))
    def __add__(self,other):
        print("%s, %s 결혼했네" %(self.fullname,other.fullname))
    def fight(self,other):
        print("%s,%s 싸우네" %(self.fullname,other.fullname))
    def __sub__(self,other):
        print("%s,%s 이혼했네" %(self.fullname,other.fullname))

class HouseKim(HousePark):
    lastname = "김"
    def travel(self,where,day):
        print("%s %s여행 %d일 가네." %(self.fullname,where,day))

pey=HousePark("응용")
juliet=HouseKim("줄리엣")
pey.travel("부산")
juliet.travel("부산",3)
pey.love(juliet)
pey + juliet
pey.fight(juliet)
pey - juliet