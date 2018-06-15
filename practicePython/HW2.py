# -*- coding: utf-8 -*-
"""
Created on Tue Jun 12 09:09:57 2018

@author: SevenHope
"""

while True:
    try:
        n = int(input("Please enter a number: "))
        break
    except ValueError:
        print("Oops! That was not a number. Try again...")

for y in range(1,n+1):
    if y%2==1:
        print("*",end='')
    else:
        print("-",end='')

