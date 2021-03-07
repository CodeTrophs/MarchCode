#Day 5
n , m = [int(x) for x in input().split()]
if n < m:
    for i in range(n,m):
        print(i,end=" ")
else:
    for i in range(m,n):
        print(i,end=" ")
