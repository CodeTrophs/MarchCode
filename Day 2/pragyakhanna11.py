#WRITE A PROGRAM TO CHECK WHETHER A NUMBER IS DIVISBLE BY BOTH 5 & 11

num = int(input("Please provide a number: "))

if(num%5 == 0 and num%11 == 0):
    print("Yes,", num, "is divisible by both 5 and 11.")
else:
    print("No,", num, "is not divisible by both 5 and 11.")
