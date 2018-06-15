# -*- coding: utf-8 -*-
"""
Created on Tue Jun 12 09:09:57 2018

@author: SevenHope
"""

#print ("Please in put the number of row: ")
#n = input('Enter your input')
#n = int (n)
while True:
    try:
        n = int(input("Please enter a number: "))
        break
    except ValueError:
        print("Oops! That was not a number. Try again...")

for x in range(n):
    for y in range(x+1):
        print ("*", end='')
    print(" ")