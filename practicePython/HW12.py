# -*- coding: utf-8 -*-
"""
Created on Tue Jun 12 09:09:57 2018

@author: SevenHope
"""
z=0
while True:
    try:
        n = int(input("Please enter the range of the list: "))
        break
    except ValueError:
        print("Oops! That was not a number. Try again...")
list=[[]for x in range(n)]
for y in range(n):
    try:
        m = int(input("Please fill in the number: "))
    except ValueError:
        print("Oops! That was not a number. Try again...")
        break
    list[y].append(m)
    z+=m
    print(list)
print("Average value of your list: ",z/n,end='')