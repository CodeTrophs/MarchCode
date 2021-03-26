arr = [4,3,5,32,3]
max = min = arr[0]
for i in range(5):
    if (max < arr[i]):
        max = arr[i]
    if (min > arr[i]):
        min = arr[i]
print("The max element of the array is :", max ) 
print("The min element of the array is :" , min )
