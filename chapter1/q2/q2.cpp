#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool checkPermutation(string &str1, string &str2){
    if (str1.size() != str2.size()) return false;
    
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if (str1 == str2) return true;
    return false;
}

int main() {
    string str1 = "abcde";
    string str2 = "edcbf";
    if (checkPermutation(str1, str2)){
        cout << "The strings are permutations of each other." << endl;
    } else {
        cout << "The strings are not permutations of each other." << endl;
    }
    return 0;
}