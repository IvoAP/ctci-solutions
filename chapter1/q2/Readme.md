# Question 1.2: Check Permutation

## Problem Statement
Given two strings, write a method to decide if one is a permutation of the other.

## Solutions

### Approach 1: Sorting (C++)
- **Time Complexity:** O(n log n) where n is the length of the strings
- **Space Complexity:** O(1) if sorting in-place, O(n) if creating new strings
- **Algorithm:** Sort both strings and compare if they are equal

### Approach 2: Character Count (Python)
- **Time Complexity:** O(n) where n is the length of the strings
- **Space Complexity:** O(k) where k is the number of unique characters
- **Algorithm:** Count the frequency of each character in both strings using a hash map/Counter

## Key Insights
1. **Length Check:** If the strings have different lengths, they cannot be permutations
2. **Character Frequency:** Two strings are permutations if they contain the same characters with the same frequencies
3. **Case Sensitivity:** Consider whether the comparison should be case-sensitive
4. **Whitespace:** Consider whether whitespace should be ignored

## Implementation Details

### C++ Solution (`q2.cpp`)
```cpp
bool checkPermutation(string &str1, string &str2){
    if (str1.size() != str2.size()) return false;
    
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    return str1 == str2;
}
```

### Python Solution (`q2.py`)
```python
def isPermutation(str1: str, str2: str) -> bool:
    if len(str1) != len(str2):
        return False
    
    return Counter(str1) == Counter(str2)
```

## Test Cases
- `"abcde"` and `"edcba"` → `True` (permutation)
- `"abcde"` and `"edcbf"` → `False` (different characters)
- `""` and `""` → `True` (empty strings)
- `"a"` and `"ab"` → `False` (different lengths)

