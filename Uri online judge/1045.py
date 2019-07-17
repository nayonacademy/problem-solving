#1045 - Triangle Types
# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
num = input().split(" ")
A = float(num[0])
B = float(num[1])
C = float(num[2])
if (A >= B) and (A >= C):
    cal = B+C
    if(A >= cal):
        print('NAO FORMA TRIANGULO')
    else:
        if (A*A) == (B*B) + (C*C):
            print("TRIANGULO RETANGULO")
        if (A*A) > (B*B) + (C*C):
            print("TRIANGULO OBTUSANGULO")
        if (A*A) < (B*B) + (C*C):
            print("TRIANGULO ACUTANGULO")

elif(B >= A)and(B >= C):
    cal = A+C
    if (B >= cal):
        print('NAO FORMA TRIANGULO')
    else:
        if (B*B) == (A*A) + (C*C):
            print("TRIANGULO RETANGULO")
        if (B*B) > (A*A) + (C*C):
            print("TRIANGULO OBTUSANGULO")
        if (B*B) < (A*A) + (C*C):
            print("TRIANGULO ACUTANGULO")
elif(C >= A)and(C >= B):
    cal = A+B
    if (C >= cal):
        print('NAO FORMA TRIANGULO')
    else:
        if (C*C) == (B*B) + (A*A):
            print("TRIANGULO RETANGULO")
        if (C*C) > (B*B) + (A*A):
            print("TRIANGULO OBTUSANGULO")
        if (C*C) < (B*B) + (A*A):
            print("TRIANGULO ACUTANGULO")

if(A == B == C):
    print("TRIANGULO EQUILATERO")
elif(A == B):
    print("TRIANGULO ISOSCELES")
elif(A == C):
    print("TRIANGULO ISOSCELES")
elif(B == C):
    print("TRIANGULO ISOSCELES")
