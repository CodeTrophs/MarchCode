# # Write a program to print the pattern upto n lines
def alp_pattern(n):
    m = 65
    for i in range(0,n):        
        for j in range(65,65+i):
            print(chr(m),end="")
            m+=1
        print()

n =int(input())
alp_pattern(n)
