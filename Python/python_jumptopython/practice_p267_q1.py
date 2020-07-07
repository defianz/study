
class Calculator:

    def __init__(self, numbers):
        self.numbers = numbers
        self.tlen = len(numbers)

    def sum(self):
        total = 0
        for i in self.numbers:
            total += i
        return total

    def avg(self):
        total = sum(self.numbers)
        return total/self.tlen


if __name__ == '__main__':
    cal1 = Calculator([1, 2, 3, 4, 5])
    print(cal1.sum())
    print(cal1.avg())

    cal2 = Calculator([6, 7, 8, 9, 10])
    print(cal2.sum())
    print(cal2.avg())
