#!/usr/bin/env python
# coding: utf-8

# [실전2] 큰 수의 법칙

n,m,k=map(int, input('').split(' '))
data=list(map(int, input('').split(' ')))

data.sort()

max_one=data[n-1]
cnt_one=(m/(k+1))*k + m%(k+1)

max_two=data[n-2]
cnt_two = m-cnt_one

max_num = int(max_one*cnt_one + max_two*cnt_two)
print(max_num)