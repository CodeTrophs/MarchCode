"""
Original file is located at
    https://colab.research.google.com/drive/1S9py_4ptLFQ4TXO6vc_FZfIHhmxpF5rI
"""

def upper(s):
    string = []
    for i in s:
        string.append(i.capitalize())
    string = " ".join(string)
    print("String after capitalized : ",string)

s = input("Enter the string : ").split(" ")
print(upper(s))
