def noOfwords(s):
    words=0
    i=0
    while i < len(s) : 
        if s[i] == ' ' : 
            words += 1
        
        i += 1
    
    if s[i-1] != ' ' :
        words += 1
    return words

string = input("Enter String : ")
count = noOfwords(string)
print(count)
