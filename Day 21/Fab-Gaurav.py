"""
Original file is located at
    https://colab.research.google.com/drive/103MrzEN3JjKUxmyK4b3d2pukRPzMnlbi
"""

def alp_pat(n):
    ascii_number = 65
    for i in range(0,n):        
        for j in range(65,65+i):
            print(chr(ascii_number),end=" ")
            ascii_number += 1
        print()

n =int(input("Enter the rows : "))
alp_pat(n)
