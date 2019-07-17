#1041 - Coordinates of a Point
# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
num = input().split(" ")

a = float(num[0])
b = float(num[1])

if a == 0.0 and b == 0.0:
    print("Origem")
elif a == 0:
    print("Eixo Y")
elif b == 0:
    print("Eixo X")
elif a > 0 and b > 0:
    print("Q1")
elif a > 0 and b < 0:
    print("Q4")
elif a < 0 and b < 0:
    print("Q3")
elif a < 0 and b > 0:
    print("Q2")
