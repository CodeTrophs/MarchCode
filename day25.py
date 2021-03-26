# To merge 2 array into a third array

def merge_array(a,b):
    sa = len(a)
    sb = len(b)
    ans = []
    i = 0
    j = 0
    while i<sa and j <sb:
        if a[i] > b[j]:
            ans.append(b[j])
            j+=1
        elif a[i] < b[j]:
            ans.append(a[i])
            i+=1
    
    while i<sa:
        for m in range(sa-sb,sa):
            ans.append(a[m])
            i+=1
    while j<sa:
        for m in range(sb-sa,sb):
            ans.append(b[m])
            j+=1

    return ans

a = [1,3,5,7,9,13]
b = [2,4,6,8,10,24,34,67,69,74]
print(merge_array(a,b))
