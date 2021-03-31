# WAP using Function to take a string as input and convert first letter of all the words present in the string to uppercase.

def uppercase(string str):
  for i in range(0, len(str)):
    if i == 0 and str[i] != ' ' or str[i] != ' ' and str[i - 1] == ' ':
      if str[i] >= 'a' and str[i] <= 'z':
        str[i] = (char)(str[i] - 'a' + 'A')
    else if str[i] >= 'A' and str[i] <= 'Z':
      str[i] = (char)(str[i] + 'a' - 'A')
  return str
s=input("Enter a string: ")
print(uppercase(s))
