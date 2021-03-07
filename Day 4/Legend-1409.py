ch = input("Enter a single character : ")
asc = int(input("Enter the Ascii value : "))
print()
if asc == ord(ch):
    print("The given Ascii value is correct")
else:
    print("The given Ascii value is incorrect")
    print(f"Ascii value of {ch} is {ord(ch)}")
