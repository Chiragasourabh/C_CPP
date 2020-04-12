def stringToBinary(string): 
    binary = [] 
    for character in string: 
        binary.append(bin(ord(character))[:]) 
    return (' '.join(binary)) 

string = input("Enter a string : ")
print("\n\nBinary representation of {} is".format(string))
print(stringToBinary(string)) 