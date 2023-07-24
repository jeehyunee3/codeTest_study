#!/usr/bin/env python
# coding: utf-8

# [예제3-1] 거스름돈


n=int(input(''))

coin=0
coin_list=[500,100,50,10]

for i in coin_list:
    coin = coin + int(n/i)
    n = int(n%i)

print(coin)

