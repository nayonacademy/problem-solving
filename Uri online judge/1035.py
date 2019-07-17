# 1035 - Selection Test 1
# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
mynum = input().split(" ")
A = int(mynum[0])
B = int(mynum[1])
C = int(mynum[2])
D = int(mynum[3])

if C > 0 and D > 0 and A % 2 == 0 and B > C and D > A and (C+D) > (A+B):
    print("Valores aceitos")
else:
    print("Valores nao aceitos")
