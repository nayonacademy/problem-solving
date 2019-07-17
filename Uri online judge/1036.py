#1036 - Bhaskara's Formula
# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
import math
myinput = input().split()
a = float(myinput[0])
b = float(myinput[1])
c = float(myinput[2])

if a != 0:
    delta = (b * b) - (4 * a * c)
    if (delta > 0):
        x1 = (-b + math.sqrt(delta)) / (2 * a)
        x2 = (-b - math.sqrt(delta)) / (2 * a)
        x1 = format(x1, '.5f')
        x2 = format(x2, '.5f')
        print("R1 = "+x1)
        print("R2 = "+x2)
    else:
        print("Impossivel calcular")
else:
    print("Impossivel calcular")
