'''
n, m = map(int, input().split(' '))
mat=[]
for i in range(0, n):
    tmp = list(map(int, input().split(' ')))
    tmp.sort()
    mat.append(tmp)

maxNum=0
for i in range(0, n):
    if maxNum<mat[i][0]:
        maxNum=mat[i][0]

print(maxNum)
'''

n, m = map(int, input().split(' '))

maxNum=0
for i in range(0, n):
    tmp = list(map(int, input().split(' ')))
    tmp.sort()
    if maxNum<tmp[0]:
        maxNum=tmp[0]

print(maxNum)
