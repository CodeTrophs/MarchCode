m = int(input("Enter the upper limit "))
n = int(input("Enter the lower limit "))

sum_all = 0
sum_even = 0
for i in range(n,m+1):
    sum_all = sum_all+i
    if (i%2 == 0 ):
        sum_even= sum_even + i

print("The sum of all the number is ", sum_all)
print("The sum of all the even number is ", sum_even)
