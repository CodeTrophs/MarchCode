number_of_digits = 0
number = int(input());

while( number>0):
   number_of_digits=number_of_digits+1
   number= number // 10
print("Number of digits in the number are", number_of_digits)