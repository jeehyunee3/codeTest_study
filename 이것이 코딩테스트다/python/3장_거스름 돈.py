n=1260
coin=0

coin500 = int(n/500)
n = n%500

coin100 = int(n/100)
n = n%100

coin50 = int(n/50)
n = n%50

coin10 = int(n/10)
n = n%10

if n==0:
    coin = coin500+coin100+coin50+coin10

print(coin)
