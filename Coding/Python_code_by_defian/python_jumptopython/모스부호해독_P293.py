

dic = {".-": 'A', "-...": 'B', '-.-.': 'C','-..':'D','.':'E','..-.':'F','--.':'G','....':'H','..':'I','.---':'J',
        '-.-':'K','.-..':'L','--':'M','-.':'N','---':'O','.--.':'P','--.-':'Q','.-.':'R','...':'S','-':'T','..-':'U','...-':'V','.--':'W','-..-':'X','-.--':'Y','--..':'Z'}


def confirm(lines):
    for i in list(lines.split(" ")):
        if(i==''):
            print(" ",end='')
        else :
            print(dic[i],end='')


lines = input()
#print(list(lines.split(" ")))
confirm(lines)
#print(dic[".-"])