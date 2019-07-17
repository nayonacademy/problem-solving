#1037 - Interval
# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
num = float(input())

if num >= 0 and num <= 25:
    print("Intervalo [0,25]", end="\n")
elif num > 25 and num <= 50:
    print("Intervalo (25,50]", end="\n")
elif num > 50 and num <= 75:
    print("Intervalo (50,75]", end="\n")
elif num > 75 and num <= 100:
    print("Intervalo (75,100]", end="\n")
else:
    print("Fora de intervalo", end="\n")
