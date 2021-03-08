n = int(input("Enter the value of n : "))
m = int(input("Enter the value of m : "))
all_sum = 0
even_sum = 0
for i in range(n + 1, m, 1):
    all_sum += i
    if i % 2 == 0:
        even_sum += i
print(f"Sum of all number : {all_sum}")
print(f"Sum of even number : {even_sum}")
