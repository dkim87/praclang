#!/usr/local/bin/python3
import sys
print(sys.version)


string = "g fmnc wms bgblr rpylqjyrc gr zw fylb. rfyrq ufyr amknsrcpq ypc dmp. bmgle gr gl zw fylb gq glcddgagclr ylb rfyr'q ufw rfgq rcvr gq qm jmle. sqgle qrpgle.kyicrpylq() gq pcamkkclbcb. lmu ynnjw ml rfc spj."

string2 = "http://www.pythonchallenge.com/pc/def/map.html"

for letter in string2:
    if (ord(letter)>= 121 and ord(letter)<=122):
        print(chr(ord(letter)-24),end='')
    elif (ord(letter)>=97 and ord(letter)<=120):
        print(chr(ord(letter)+2),end='')
    else:
        print(letter,end='')
