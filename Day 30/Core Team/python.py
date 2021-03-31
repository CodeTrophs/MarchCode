def uppercase(string):
    list = []
    for i in string:
        list.append(i.capitalize())
    list = " ".join(list)
    return list    

string = input().split(" ")
print(uppercase(string))
