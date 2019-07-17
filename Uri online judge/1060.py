# 1060 - Positive Numbers
# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
count = 0
for i in range(6):
    inptnum = input()
    if inptnum != '':
        finalnum = float(inptnum)
        if finalnum > 0:
            count += 1

print(str(count)+' valores positivos')
