'''
n,m,k = map(int, input().split(' '))

arr = list(map(int, input().split(' ')))
arr.sort(reverse=True)

first = arr[0]
second = arr[1]

maxSum=0
count=0
idx=0
while(True):
    if count<3:
        maxSum+=first
        count+=1
        idx+=1
    elif count == 3:
        maxSum+=second
        count=0
        idx+=1
    if idx==8:
        break
    
print(maxSum)
'''
n,m,k = map(int, input().split(' '))

arr = list(map(int, input().split(' ')))
arr.sort(reverse=True)

first = arr[0]
second = arr[1]

maxSum=0
while(True):
    for i in range(0, k):
        if m==0:
            break
        maxSum += first
        m = m-1
        
    if m==0:
        break

    maxSum += second
    m = m-1
    
print(maxSum)
