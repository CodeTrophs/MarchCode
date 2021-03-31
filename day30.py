# WAP using Function to take a string as input and convert first letter of all the words present in the string to uppercase.
def uppcase_first_letter(s):
    lst = []
    for i in s:
        lst.append(i.capitalize())
    lst = " ".join(lst)
    return lst    

s = input().split(" ")
print(uppcase_first_letter(s))