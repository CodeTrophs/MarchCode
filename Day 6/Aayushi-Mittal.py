# Write a program to print the sum of all the numbers and also the sum of all the even numbers between ( n and m ).

n = int(input())
m = int(input())
num_sum = 0 
even_sum = 0;
print(f"PRINTING NUMBERS FROM {n} TO {m} :");
  for i in range(n, m+1):
    print(i)
    num_sum+=i;
    if i%2==0:
      even_sum+=i;
print(f"\n> Sum of numbers from {n} to {m} : {num_sum}")
print(f"> Sum of even numbers from {n} to {m} : {even_sum}")
}
