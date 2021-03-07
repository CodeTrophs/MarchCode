#Number of days in a month

month = int(input("Please provide the month(number): "))
year = int(input("Please provide the year: "))
if(month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12):
	print("Number of days is 31")
elif((month == 2) and ((year%400==0) or (year%4==0 and year%100!=0))):	
	print("Number of days is 29")
elif(month == 2):
	print(" of days is 28")
else:
	print("Number of days is 30")
