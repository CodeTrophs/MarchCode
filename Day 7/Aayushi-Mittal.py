# To count the number of digits in a number.

count = 0
num = int(input());
n = num;
while n!=0:
   count=count+1
   n /= 10
print(f"> Number of digits in {num} are : {count}")
