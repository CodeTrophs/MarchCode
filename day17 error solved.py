def fibonacci_series(n):
	a = 0
	b = 1
	if a < 0:
		return
	print(a , end = " ")
	for i in range(1,n+1):
		print(b,end =" ")
		c = a+b
		a = b
		b = c

n = int(input("Enter the value for n : "))
fibonacci_series(n)

	