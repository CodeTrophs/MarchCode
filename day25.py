# To merge 2 array into a third array

def merge_two_array(a,b):
    ans = []
    for i in a:
        ans.append(i)
    for j in b:
        ans.append(j)
    return ans


a = list(map(int,input().split()))
b = list(map(int,input().split()))
print(merge_two_array(a,b))
