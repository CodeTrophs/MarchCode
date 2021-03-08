#day 6

n,m = [int(x) for x in input().split()]

wsum = 0
esum = 0
for i in range(n+1,m):
    wsum += i
    if i % 2 == 0:
        esum += i
print("Total sum : "+str(wsum))
print("Even numbers sum : "+str(esum))
