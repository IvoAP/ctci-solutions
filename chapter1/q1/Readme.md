# Question 1: Is Unique

## Problem Statement
Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures?

## Solutions

### Approach 1: Using Set/Hash Table
**Time Complexity:** O(n)  
**Space Complexity:** O(min(c, n)) where c is the size of the character set

The first approach uses a hash set to track characters we've already seen. For each character in the string, we check if it already exists in the set. If it does, we found a duplicate and return false. Otherwise, we add it to the set and continue.

**Algorithm:**
1. Create an empty set to store characters
2. Iterate through each character in the string
3. If character is already in the set, return false
4. Add character to the set
5. If we complete the loop, return true

### Approach 2: Sorting (No Extra Data Structures)
**Time Complexity:** O(n log n)  
**Space Complexity:** O(1) if we can modify the input string

When we cannot use additional data structures, we can sort the string and then check adjacent characters for duplicates.

**Algorithm:**
1. Sort the string
2. Iterate through the sorted string
3. Compare each character with the previous one
4. If any adjacent characters are the same, return false
5. If we complete the loop, return true

## Implementation

### C++ Solution
```cpp
// Approach 1: Using Set
bool isUnique(string &str) {
    set<char> charSet;
    for (char c : str) {
        if (charSet.count(c)) {
            return false;
        }
        charSet.insert(c);
    }
    return true;
}

// Approach 2: Sorting
bool isUniqueSorted(string &str) {
    sort(str.begin(), str.end());
    for (int i = 1; i < static_cast<int>(str.size()); i++) {
        if (str[i] == str[i-1]) {
            return false;
        }
    }
    return true;
}
```

### Python Solution
```python
# Approach 1: Using Set
def isUnique(text: str) -> bool:
    charSet = set()
    for c in text:
        if c in charSet:
            return False
        charSet.add(c)
    return True

# Approach 2: Sorting
def isUniqueSorted(text: str) -> bool:
    text = sorted(text)
    for i in range(1, len(text)):
        if text[i] == text[i-1]:
            return False
    return True
```

## Test Cases
- `"abcdef"` → `true` (all unique)
- `"hello"` → `false` (duplicate 'l')
- `""` → `true` (empty string)
- `"a"` → `true` (single character)
- `"aA"` → `true` (case sensitive)

## Optimization Notes
1. **Early termination:** Both approaches return false as soon as a duplicate is found
2. **Character set size:** If the string length is greater than the character set size (e.g., 128 for ASCII), we can immediately return false
3. **Bit manipulation:** For ASCII characters, we could use a bit vector instead of a set for even better space efficiency
