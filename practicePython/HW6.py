# -*- coding: utf-8 -*-
"""
Created on Tue Jun 12 09:09:57 2018

@author: SevenHope
"""

while True:
    try:
        b = int(input("Please enter a number of rows: "))
        break
    except ValueError:
        print("Oops! That was not a number. Try again...")
for x in range(b):
    for y in range(b):
        if x%2==0:
            print("*", end='')
            print("*", end='')
        else:
            print("-", end='')
            print("-", end='')
    print()