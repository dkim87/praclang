import random
import sys
import os

print("Hello World")

name="Derek"
print(name)
name=15
print(name)

print ("5 + 2 =", 5+2)
print ("5 - 2 =", 5-2)
print ("5 * 2 =", 5*2)
print ("5 / 2 =", 5/2)
print ("5 % 2 =", 5%2)
print ("5 ** 2 =", 5**2)
print ("5 // 2 =", 5//2)

print("1+2-3*2=",1+2-3*2)
print("(1+2-3)*2=",(1+2-3)*2)

quote =  "\"Always remember you are unique\""

multi_line_quote = '''just like everyone 
else'''

print("%s %s %s" %('I like the quote', quote, multi_line_quote))

print('\n' * 5)

print("I don't like ", end ="hello ")
print("newlines")

grocery_list = ['Juice','Tomatoes','Potatoes','Bananas']

print('First item', grocery_list[0])

print(grocery_list[1:3])

other_events = ['Wash Car','Pick Up Kids', 'Cash Check']
to_do_list = [other_events, grocery_list]

print("to_do_list: ", to_do_list)

to_do_list2 = [other_events+grocery_list]
print("to_do_list2: ", to_do_list2)

to_do_list3 = other_events + grocery_list
print("to_do_list3: ", to_do_list3)

print((to_do_list[1][1]))

grocery_list.append('Onions')
print(" grocery_list.append('Onions') ",end=" ")
print(":")
print(to_do_list)
print("")
print("")

grocery_list.insert(7, "Pickle7")
print(" grocery_list.insert(7, \"Pickle7\") ",end=" ")
print(":")
print(to_do_list)
print("")
print("")
grocery_list.insert(6, "Pickle6")
print(" grocery_list.insert(6, \"Pickle6\") ",end=" ")
print(":")
print(to_do_list)
print("")
print("")
grocery_list.insert(5, "Pickle5")
print(" grocery_list.insert(5, \"Pickle5\") ",end=" ")
print(":")
print(to_do_list)
print("")
print("")
grocery_list.insert(4, "Pickle4")
print(" grocery_list.insert(4, \"Pickle4\") ",end=" ")
print(":")
print(to_do_list)
print("")
print("")
grocery_list.insert(3, "Pickle3")
print(" grocery_list.insert(3, \"Pickle3\") ",end=" ")
print(":")
print(to_do_list)
print("")
print("")
grocery_list.insert(2, "Pickle2")
print(" grocery_list.insert(2, \"Pickle2\") ",end=" ")
print(":")
print(to_do_list)
print("")
print("")
grocery_list.insert(1, "Pickle1")
print(" grocery_list.insert(1, \"Pickle1\") ",end=" ")
print(":")
print(to_do_list)
print("")
print("")
grocery_list.insert(0, "Pickle0")
print(" grocery_list.insert(0, \"Pickle0\") ",end=" ")
print(":")
print(to_do_list)
print("")
print("")

grocery_list.sort()
print(" grocery_list.sort() ",end=" ")
print(":")
print(to_do_list)
print("")
print("")

grocery_list.reverse()
print(" grocery_list.reverse() ",end=" ")
print(":")
print(to_do_list)
print("")
print("")

del grocery_list[4]
print(" del grocery_list[4] ",end=" ")
print(":")
print(to_do_list)
print("")
print("")
