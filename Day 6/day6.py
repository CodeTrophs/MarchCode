# "Write a program to print the sum of all the numbers and also the sum of all the even numbers between ( n and m )"
def sum_of_all_num(n,m):
    sum = 0
    for i in range(n,m+1):
        sum+=i
    return sum

def sum_of_even(n,m):
    sum = 0
    for i in range(n,m+1):
        if i%2 == 0:
            sum+=i
    return sum



n = int(input())
m = int(input())
print(sum_of_all_num(n,m))
print(sum_of_even(n,m))