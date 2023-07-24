#!/usr/bin/env python
# coding: utf-8

# [실전3] 숫자 카드 게임

n,m = map(int, input('').split(' '))

minNum=[]
for i in range(0, n):
    data=list(map(int, input('').split(' ')))
    
#     data.sort()
#     minNum.append(data[0])
    minNum.append(min(data))
    
# minNum.sort()
# print(minNum[n-1])
print(max(minNum))





