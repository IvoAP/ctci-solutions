from collections import Counter

def isPermutation(str1 : str, str2: str) -> bool:
    if len(str1) != len(str2):
        return False
    
    return Counter(str1) == Counter(str2)

    
   
string1 = "abcde"
string2 = "edcba"

print(isPermutation(string1, string2)) 
