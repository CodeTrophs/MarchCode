#print all natural numbers between n and m

n = int(input("Please provide the first number: "))
m = int(input("Please provide the first number: "))

if(n>0 and m>0):
    for i in range (n+1, m):
        print(i, end = "")
        print(",", end = " ")
else:
    print("Please provide a valid input")
