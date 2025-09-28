def isUnique(text : str) -> bool:
    charSet = set()
    for c in text:
        if c in charSet:
            return False
        charSet.add(c)
    return True

def isUniqueSorted(text : str) -> bool:
    text = sorted(text)
    for i in range(1, len(text)):
        if text[i] == text[i-1]:
            return False
    return True

text = "a"
print(isUnique(text))
print(isUniqueSorted(text)) 