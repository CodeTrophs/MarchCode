"""

Original file is located at
    https://colab.research.google.com/drive/1tE2LZVAg6-rDVbmg5SIDWAuM6ArxJtqb
"""

num = int(input(" Enter any Positive Integer : "))

if((num % 5 == 0) and (num % 11 == 0)):
   print(num, "is Divisible by 5 and 11")
else:
   print(num, " is Not Divisible by 5 and 11")
